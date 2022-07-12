# -*- coding: utf-8 -*-
"""
Created on Mon Sep 14 14:55:52 2020

@author: Manish
"""
import pandas as pd
loc=('manishO.xlsx')
data=pd.read_excel(loc)
def double_num(num):
    return num*2
data['Double Sub1']=double_num(data['Sub1'])
data['Percentage']=(data['Sub1']+data['Sub2'])/2
data['Total']=(data['Sub1']+data['Sub2'])
print(data.head())
x=data.iloc[:,0:5].values
y=data.iloc[:,5].values
#print('all values in table: \n',x)
#oif data.iloc[1:0,5].values>80:
#data['Grade']=data['A']
print(y)