# -*- coding: utf-8 -*-
"""
Created on Wed Oct  7 15:15:51 2020

@author: Manish
"""

# -*- coding: utf-8 -*-
"""
Created on Wed Oct  7 14:18:58 2020

@author: Manish
"""
import pandas as pd

import matplotlib.pyplot as plt
#binning of the data
loc='most_runs_average_strikerate.csv'
data=pd.read_csv(loc)
data['strikerate']=data['strikerate']/data['strikerate'].max() #simple deature scaling
data['total_runs']=data['total_runs']/data['total_runs'].max()
bins=[0,0.2,0.4,0.6,1]
grp_names=['Level 1 Experience','Level 2 Experience','Level 3 Experience','READY TO BECOME COACH']
data['GROUP']=pd.cut(data['total_runs'],bins,labels=grp_names) #bnning till this point
data['GROUP']=data['GROUP'].fillna(method='ffill')
print(data.iloc[:])
figure=plt.figure(figsize=(5,6))
x=data.iloc[0:20,1].values
y=data.iloc[0:20,5].values
plt.boxplot(x,y)
plt.show()
plt.xlabel('<----total runs---->')
plt.ylabel('<----strikerate---->')