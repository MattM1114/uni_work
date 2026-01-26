import pandas as pd 
import plotly.express as px
import seaborn as sns

mpg = sns.load_dataset('mpg')

mpg.head()

fig = px.scatter(mpg,
                 x='horsepower',
                 y='mpg',
                 #hover_data=['name','displacement'],
                 color='origin',
                 size = 'cylinders',
                 title= 'vehicle mpg by horsepower',
                 labels={'horsepower':'Horsepower', 'mpg':'Miles per gallon',})

fig.show()

