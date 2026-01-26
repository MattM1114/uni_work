import pandas as pd
import plotly.express as px
import dash
import dash_bootstrap_components as dbc
from dash import dcc, html, Input, Output

# ─── 1. Load & preprocess data ────────────────────────────────────────────────
df = pd.read_csv("netflix_titles.csv")
df["date_added"] = pd.to_datetime(df["date_added"], errors="coerce")
df["year_added"] = df["date_added"].dt.year
df["month_added"] = df["date_added"].dt.month_name()
df["listed_in"] = df["listed_in"].fillna("")
df["main_genre"] = df["listed_in"].str.split(",").str[0].str.strip()
def parse_duration(x):
    if pd.isna(x): return None
    if "min" in x: return int(x.replace("min", "").strip())
    if "Season" in x: return int(x.replace("Seasons", "").replace("Season", "").strip())
    return None
df["duration_int"] = df["duration"].apply(parse_duration)
df["country"] = df["country"].fillna("Unknown Country")
df["director"] = df["director"].fillna("Unknown Director")
df["cast"] = df["cast"].fillna("No Cast Information")
country_mapping = {"United States": "USA", "United Kingdom": "UK"}
df["country_standardized"] = df["country"].replace(country_mapping, regex=False)
df_genres = df.assign(genre=df['listed_in'].str.split(', ')).explode('genre')
df_genres['genre'] = df_genres['genre'].str.strip()
df['decade_added'] = df['year_added'].dropna().astype(int).floordiv(10) * 10
df['decade_added'] = df['decade_added'].astype(str) + 's'
df['decade_added'] = df['decade_added'].fillna('Unknown')
# ─── 2. Initialize Dash app with a Bootstrap theme ───────────────────────────
app = dash.Dash(__name__, external_stylesheets=[dbc.themes.LUX])
# ─── 3. Layout ────────────────────────────────────────────────────────────────
app.layout = dbc.Container(fluid=True, children=[
    dbc.Row(dbc.Col(html.H2("📺 Netflix Analysis Dashboard"), className="my-3")),
    dbc.Row([
        dbc.Col([
            html.Label("Filter by Year Added:"),
            dcc.Dropdown(id="year_filter", options=[{"label": y, "value": y} for y in sorted(df["year_added"].dropna().unique())], placeholder="All years", clearable=True),
            html.Label("Filter by Type:"),
            dcc.Dropdown(id="type_filter", options=[{"label": t, "value": t} for t in sorted(df["type"].dropna().unique())], placeholder="All types", clearable=True),
            html.Label("Filter by Genre:"),
            dcc.Dropdown(id="genre_filter", options=[{"label": g, "value": g} for g in sorted(df_genres["genre"].dropna().unique())], placeholder="All genres", clearable=True, multi=True),
        ], width=3),
        dbc.Col([
            dbc.Row([dbc.Col(dcc.Graph(id="genre_bar", config={'displayModeBar': True}), width=6), dbc.Col(dcc.Graph(id="type_bar", config={'displayModeBar': True}), width=6)]),
            dbc.Row([dbc.Col(dcc.Graph(id="type_pie", config={'displayModeBar': True}), width=6), dbc.Col(dcc.Graph(id="timeline_line", config={'displayModeBar': True}), width=6)]),
            dbc.Row([dbc.Col(dcc.Graph(id="duration_scatter", config={'displayModeBar': True}), width=6), dbc.Col(dcc.Graph(id="geo_choropleth", config={'displayModeBar': True}), width=6)]),
        ], width=9),
    ]),
])
# ─── 4. Callbacks ─────────────────────────────────────────────────────────────
@app.callback(
    Output("genre_bar", "figure"),
    Output("type_bar", "figure"),
    Output("type_pie", "figure"),
    Output("timeline_line", "figure"),
    Output("duration_scatter", "figure"),
    Output("geo_choropleth", "figure"),
    Input("year_filter", "value"),
    Input("type_filter", "value"),
    Input("genre_filter", "value"),)
def update_graphs(selected_year, selected_type, selected_genres):
    dff = df.copy()
    if selected_year: dff = dff[dff["year_added"] == selected_year]
    if selected_type: dff = dff[dff["type"] == selected_type]
    if selected_genres: dff = dff[dff["listed_in"].str.contains('|'.join(selected_genres), case=False)]
    genres = dff["main_genre"].value_counts().nlargest(10).reset_index()
    genres.columns = ["Genre", "Count"]
    fig_genre = px.bar(genres, x="Genre", y="Count", title="Top 10 Main Genres", template="plotly_white")
    type_counts = dff["type"].value_counts().reset_index()
    type_counts.columns = ["Type", "Count"]
    fig_type_bar = px.bar(type_counts, x="Type", y="Count", title="Movies vs TV Shows (Count)", template="plotly_white", color="Type")
    fig_type_pie = px.pie(type_counts, names="Type", values="Count", title="Movies vs TV Shows (Share)", template="plotly_white")
    timeline = dff.groupby(["year_added", "type"]).size().reset_index(name="Count")
    fig_timeline = px.line(timeline, x="year_added", y="Count", color="type", markers=True, title="Content Added Over Time by Type", template="plotly_white")
    scatter = dff.dropna(subset=["duration_int", "release_year"])
    fig_duration = px.scatter(
        scatter,
        x="release_year",
        y="duration_int",
        facet_col="type",
        color="type",
        labels={"duration_int": "Duration (min or seasons)"},
        title="Duration vs Release Year",
        template="plotly_white",
        hover_data=['title','director'] ) # Add 'title' to hover data
    country_series = dff["country_standardized"].dropna().str.split(",").explode().str.strip()
    country_counts = country_series.value_counts().reset_index()
    country_counts.columns = ["country", "count"]
    fig_geo = px.choropleth(country_counts, locations="country", locationmode="country names", color="count", title="Content Production by Country", projection="natural earth", template="plotly_white")
    return fig_genre, fig_type_bar, fig_type_pie, fig_timeline, fig_duration, fig_geo
# ─── 5. Run ──────────────────────────────────────────────────────────────────
if __name__ == "__main__":
    app.run(debug=True)
