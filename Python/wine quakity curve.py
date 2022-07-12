# -*- coding: utf-8 -*-
"""
Created on Wed Sep 30 14:22:28 2020

@author: Manish
"""

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
loc=('Sample3 Wine Quality.csv')
data=pd.read_csv(loc)
print(data.iloc[:])
data['Fixed Acidity']=data['Fixed Acidity'].replace('...',np.NaN)
data['Quality']=data['Quality'].replace('...',np.NaN)
data['Fixed Acidity']=data['Fixed Acidity'].fillna(method='ffill')
data['Quality']=data['Quality'].fillna(method='ffill')
x=data.iloc[0:99,0]
y=data.iloc[0:99,11]
figure=plt.figure(figsize=(6,4))
plt.plot(x,y,'r^-')
plt.xlabel('<---FIXED ACIDITY--->',fontsize='14')
plt.ylabel('<---ALCOHOL--->',fontsize='14')
