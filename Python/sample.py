# -*- coding: utf-8 -*-
"""
Created on Sat May  7 20:25:53 2022

@author: Manish
"""
l1=[1,1,1,2,2,3]
freq={}
l2=[]
a=2
for i in l1:
    if(i in freq):
        freq[i]+=1
    else:
        freq[i]=1
print(freq)
for key in freq:
    l2.append(key)
for i in range(0,a):
    print(l2[i])