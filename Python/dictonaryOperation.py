# -*- coding: utf-8 -*-
"""
Created on Thu Aug 20 14:29:52 2020

@author: Manish
"""

myDict={'Name':'Manish','Address':'Haldwani'}
print(myDict)
print('Dictonary before updation:')
a={0:10,1:20}
print(a)
print('Dictonary After updation:')
a.update({2:30})
print(a)
inpt=int(input("ENter the range: " ))
dict={}
for i in range(0,inpt):
    dict.update({i:i*i})
print(dict)
for j in dict.values():
    print(j,end='-')
print('\n')
for j in dict.keys():
    print(j,end='-')
   