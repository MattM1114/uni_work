import pandas as pd
import seaborn as sns 
import plotly.express as px

tips = sns.load_dataset('tips')

fig = px.scatter(tips,
                 x='total_bill',
                 y='tip',
                 hover_data=['day','smoker','sex'],
                 color='time',
                 size='size',
                 title='tips by total bill',
                 labels={'total_bill':'Total Bill', 'tip':'Tip', 'smoker':'Smoker'})
fig.show()