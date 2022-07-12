# -*- coding: utf-8 -*-
"""
Created on Thu Oct  1 14:39:37 2020

@author: Manish
"""

import pandas as pd
import matplotlib.pyplot as plt
loc=('DR.xlsx')
data=pd.read_excel(loc)
#print('Simple feature scaling')
#data['Emp_Height']=data['Emp_Height']/data['Emp_Height'].max()
#data['Emp_age']=data['Emp_age']/data['Emp_age'].max()
#data['Emp_income']=data['Emp_income']/data['Emp_income'].max()
#print(data.iloc[:])
#x=data['Emp_age']
#y=data['Emp_income']
#z=data['Emp_Height']
#plt.plot(x,y,'r^-')
#plt.plot(x,z,'b^-')
#plt.xlabel('<---Age--->',fontsize=14)
#plt.ylabel('<---Income--->',fontsize=14)
#print('MIN MAX')
#data['Emp_Height']=(data['Emp_Height']/data['Emp_Height'].min())/(data['Emp_Height'].max()-data['Emp_Height'].min())
#data['Emp_age']=(data['Emp_age']/data['Emp_age'].min())/(data['Emp_age'].max()-data['Emp_age'].min())
#data['Emp_income']=(data['Emp_income']/data['Emp_income'].min())/(data['Emp_income'].max()-data['Emp_income'].min())
#print(data.iloc[:])
#x=data['Emp_age']
#y=data['Emp_income']
#z=data['Emp_Height']
#plt.plot(x,y,'r^-')
#plt.xlabel('<---Age--->',fontsize=14)
#plt.ylabel('<---Income--->',fontsize=14)

print('Standard deviation: ')
data['Emp_Height']=(data['Emp_Height']-data['Emp_Height'].mean())/(data['Emp_Height'].std())
data['Emp_age']=(data['Emp_age']-data['Emp_age'].mean())/(data['Emp_age'].std())
data['Emp_income']=(data['Emp_income']-data['Emp_income'].mean())/(data['Emp_income'].std())
print(data.iloc[:])
x=data['Emp_age']
y=data['Emp_income']
z=data['Emp_Height']
plt.plot(x,y,z,'r^-')
plt.xlabel('<---Age--->',fontsize=14)
plt.ylabel('<---Income--->',fontsize=14)