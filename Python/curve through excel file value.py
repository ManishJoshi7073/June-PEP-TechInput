import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
loc=('guruji.xlsx')
data=pd.read_excel(loc)
data['STUDENT']=data['STUDENT'].replace('-',np.NaN)
data['STUDENT']=data['STUDENT'].fillna(method='ffill')
data['X1']=data['X1'].replace('-',np.NaN)
data['X1']=data['X1'].fillna(method='ffill')
data['X2']=data['X2'].replace('-',np.NaN)
data['X2']=data['X2'].fillna(method='ffill')
data['X3']=data['X3'].replace('-',np.NaN)
data['X3']=data['X3'].fillna(method='ffill')
data['COLOR']=data['COLOR'].replace('-',np.NaN)
data['COLOR']=data['COLOR'].replace('?',np.NaN)
data['COLOR']=data['COLOR'].fillna(method='ffill')
a=data.iloc[:,1].values
b=data.iloc[:,4].values
x=data.iloc[:]
print(x)
figure=plt.figure(figsize=(6,4))
plt.plot(b,a,'b^-')
plt.xlabel('Color',color='red')
plt.ylabel('X1',color='Blue')