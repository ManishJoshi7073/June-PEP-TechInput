# -*- coding: utf-8 -*-
"""
Created on Wed Aug  5 14:20:06 2020

@author: Manish
"""

num=int(input("Enter the number: "))
def fact(num):
    fact=1
    for i in range(1,num+1):
        fact*=i
        print(fact)
fact(num)