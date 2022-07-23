# -*- coding: utf-8 -*-
"""
Created on Sat Jul 23 12:02:54 2022

@author: Manish
"""
c=0
s1=int(input("Size 1: "))
l1=[]
for i in range(0,s1):
    str1=input()
    l1.append(str1)
    
s2=int(input("Size 2: "))   
l2=[] 
for i in range(0,s2):
    str2=input()
    l2.append(str2)
freq={}
freq2={}
for i in l1:
    if i in freq:
        freq[i]+=1
    else:
        freq[i]=1
for i in l2:
    if i in freq2:
        freq2[i]+=1
    else:
        freq2[i]=1

for k,v in freq.items():
    for k1,v1 in freq2.items():
        if (k1==k and v1==v):
            c+=1
if(c<len(l2)):
    print("No")
else:
    print("Yes")
    

