# -*- coding: utf-8 -*-
"""
Created on Wed Oct  7 14:18:58 2020

@author: Manish
"""
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
df=pd.read_excel('c:/users/manish/tempp.xlsx')
print(df.head())
x=df.iloc[:,1:2].values
y=df.iloc[:,2].values
from sklearn.linear_model import LinearRegression
lin=LinearRegression()
print(lin.fit(x,y))
from sklearn.preprocessing import PolynomialFeatures
poly=PolynomialFeatures(degree=13)
x_poly =poly.fit_transform(x)
poly.fit(x_poly,y)
lin2=LinearRegression()
lin2.fit(x_poly,y)
plt.scatter(x,y,color='blue')
plt.plot(x,lin2.predict(poly.fit_transform(x)),color='red')
plt.title('LinearRegression')
plt.xlabel('Temprature')
plt.ylabel('Pressure')
plt.show()