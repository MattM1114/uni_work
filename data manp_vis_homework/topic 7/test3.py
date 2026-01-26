import pandas as pd
import seaborn as sns
import plotly.express as px

p = sns.load_dataset('penguins')



fig = px.scatter(p,
       x="body_mass_g",
       y='flipper_length_mm',
       hover_data=['island','sex','species','bill_length_mm','bill_depth_mm'],
       color='species',
       title='Penguin characteristics by species',
       labels={'body_mass_g':'Body Mass (g)', 'flipper_length_mm':'Flipper Length (mm)'},
       )
fig.show()