# Import required libraries
from dash import Dash, html, dcc, callback, Input, Output
import plotly.express as px
import seaborn as sns
import pandas as pd

# Initialize the Dash app
app = Dash(__name__)

# Load the tips dataset from seaborn
tips = sns.load_dataset("tips")

# Define the app layout
app.layout = html.Div([
    html.H1("Seaborn Tips Dataset Visualization", style={'textAlign': 'center'}),
    
    html.Div([
        # Plot 1: Scatter plot of total bill vs tip with color by day
        html.Div([
            html.H3("Tips vs Total Bill by Day"),
            dcc.Graph(
                id='scatter-plot',
                figure=px.scatter(
                    tips, 
                    x="total_bill", 
                    y="tip", 
                    color="day",
                    opacity=0.7,
                    title="Relationship between Tips and Total Bill",
                    labels={"total_bill": "Total Bill ($)", "tip": "Tip ($)"},
                    hover_data=["sex", "smoker", "size"]
                )
            )
        ], style={'width': '48%', 'display': 'inline-block'}),
        
        # Plot 2: Bar chart of average tip by day and time
        html.Div([
            html.H3("Average Tip by Day and Time"),
            dcc.Graph(
                id='bar-chart',
                figure=px.bar(
                    tips.groupby(['day', 'time'])['tip'].mean().reset_index(),
                    x="day",
                    y="tip",
                    color="time",
                    barmode="group",
                    title="Average Tip by Day and Time",
                    labels={"tip": "Average Tip ($)"}
                )
            )
        ], style={'width': '48%', 'display': 'inline-block', 'float': 'right'})
    ]),
    
    html.Div([
        # Plot 3: Box plot of tips by day
        html.Div([
            html.H3("Distribution of Tips by Day"),
            dcc.Graph(
                id='box-plot',
                figure=px.box(
                    tips,
                    x="day",
                    y="tip",
                    color="smoker",
                    title="Distribution of Tips by Day and Smoker Status",
                    labels={"tip": "Tip ($)"}
                )
            )
        ], style={'width': '48%', 'display': 'inline-block'}),
        
        # Plot 4: Pie chart of distribution by time
        html.Div([
            html.H3("Meal Time Distribution"),
            dcc.Graph(
                id='pie-chart',
                figure=px.pie(
                    tips,
                    names="time",
                    title="Distribution of Meals by Time",
                    color_discrete_sequence=px.colors.sequential.RdBu
                )
            )
        ], style={'width': '48%', 'display': 'inline-block', 'float': 'right'})
    ])
])

# Run the app
if __name__ == '__main__':
    app.run(debug=True)