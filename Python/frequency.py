# -*- coding: utf-8 -*-
"""
Created on Fri Apr 22 19:36:43 2022

@author: Manish
"""

l1=[]
freq={}
a=int(input("Enter the size of the list: "))
for i in range (1,a+1):
    item=int(input())
    l1.append(item)
for item in l1:
    if item in freq:
        freq[item]+=1
    else:
        freq[item]=1
str(freq)
print(freq)
print(freq*3)