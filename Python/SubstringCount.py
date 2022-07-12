# -*- coding: utf-8 -*-
"""
Created on Sat May  7 20:35:44 2022

@author: Manish
"""

string ="123"
n = len(string)
l1=[]
l2=[]
numsum=0
for i in range(n):
    for j in range(i, n):
        l1.append(string[i:j+1])
for n in l1:
    l2.append(int(n))
print(sum(l2))