# -*- coding: utf-8 -*-
"""
Created on Wed Oct 14 15:03:22 2020

@author: Manish
"""

import pandas as pd
import seaborn as sns  #for plotting the curve
loc=('td.csv')
data=pd.read_csv(loc)
print(data.head())
"""
print('Simple feature scaling')
data['Hospital_code']=data['Hospital_code']/data['Hospital_code'].max()
data['Available Extra Rooms in Hospital']=data['Available Extra Rooms in Hospital']/data['Available Extra Rooms in Hospital'].max()
bins=[0,2000,3000,4000,5000]
grp_names=['BELOW AVERAGE','AVERAGE','ABOVE AVERAGE','LOTTERY']
data['GROUP']=pd.cut(data['Admission_Deposit'],bins,labels=grp_names) #bnning till this point
data['GROUP']=data['GROUP'].fillna(method='ffill')
print(data)
sns.relplot(data=data,x='Hospital_code',y='Available Extra Rooms in Hospital')
"""
"""
print('MIN MAX')
data['Hospital_code']=(data['Hospital_code']/data['Hospital_code'].min())/(data['Hospital_code'].max()-data['Hospital_code'].min())
data['Available Extra Rooms in Hospital']=(data['Available Extra Rooms in Hospital']/data['Available Extra Rooms in Hospital'].min())/(data['Available Extra Rooms in Hospital'].max()-data['Available Extra Rooms in Hospital'].min())
print(data)
print(data.describe())
bins=[0,2000,3000,4000,5000]
grp_names=['BELOW AVERAGE','AVERAGE','ABOVE AVERAGE','LOTTERY']
data['GROUP']=pd.cut(data['Admission_Deposit'],bins,labels=grp_names) #bnning till this point
data['GROUP']=data['GROUP'].fillna(method='ffill')
print(data)
sns.relplot(data=data,x='Hospital_code',y='Available Extra Rooms in Hospital')
"""

print('Standard deviation: ')
data['Hospital_code']=(data['Hospital_code']-data['Hospital_code'].mean())/(data['Hospital_code'].std())
data['Available Extra Rooms in Hospital']=(data['Available Extra Rooms in Hospital']-data['Available Extra Rooms in Hospital'].mean())/(data['Available Extra Rooms in Hospital'].std())
print(data)
bins=[0,2000,3000,4000,5000]
grp_names=['BELOW AVERAGE','AVERAGE','ABOVE AVERAGE','LOTTERY']
data['GROUP']=pd.cut(data['Admission_Deposit'],bins,labels=grp_names) #bnning till this point
data['GROUP']=data['GROUP'].fillna(method='ffill')
print(data)
sns.relplot(data=data,x='Hospital_code',y='Available Extra Rooms in Hospital')
