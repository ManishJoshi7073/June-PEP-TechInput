# -*- coding: utf-8 -*-
"""
Created on Wed Aug  5 14:27:35 2020

@author: Manish
"""

n=int(input("Enter a number:"))
def sod(n):
    summ=0
    while(n>0):
        digit=n%10
        summ=summ+digit
        n=(int)(n/10)
    print("The total sum of digits is:",summ)
sod(n)

