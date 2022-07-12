# -*- coding: utf-8 -*-
"""
Created on Sun Aug 30 10:26:26 2020

@author: Manish
"""

num=int(input('ENter the number of rows youu want: '))
n=1
for i in range(0,num):
    for j in range(0,i+1):
        print(n,end=' ')
        n+=1
        if n>9:
            n=1
    print('\r')