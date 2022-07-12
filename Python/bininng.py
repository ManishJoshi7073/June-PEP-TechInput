# -*- coding: utf-8 -*-
"""
Created on Wed Oct  7 14:18:58 2020

@author: Manish
"""
import pandas as pd
import matplotlib.pyplot as plt
#binning of the data
loc='CARPRICE.xlsx'
data=pd.read_excel(loc)
pr=data.iloc[:,2].values
print('price:',list(pr))
mx=max(pr)
mn=min(pr)
print('max: ',mx,' min: ',mn)
bins=[0,400000,500000,600000,700000]
grp_names=['BELOW AVERAGE','AVERAGE','ABOVE AVERAGE','LUXURY']
data['GROUP']=pd.cut(data['PRICE'],bins,labels=grp_names) #bnning till this point
print(data)
figure=plt.figure(figsize=(6,4))
x=data['MODEL MANUF']
plt.plot(pr,x,'b^-')
plt.xlabel('<----price---->')
plt.ylabel('<----year---->')