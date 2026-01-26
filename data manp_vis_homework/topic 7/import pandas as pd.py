import pandas as pd
import seaborn as sns
import plotly.express as px

p = sns.load_dataset('penguins')

fig = px.box(
    p,
    x='species',
    y='body_mass_g',
    color =  'island',
    hover_data=['sex','bill_length_mm','flipper_length_mm','body_mass_g'],
    title='Penguin characteristics by species',
)
fig.show()