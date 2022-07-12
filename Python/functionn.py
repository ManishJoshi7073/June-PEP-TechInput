# -*- coding: utf-8 -*-
"""
Created on Wed Aug  5 14:14:09 2020

@author: Manish
"""

num=int(input("Enter the number: "))
def even_odd(num):
    if(num%2==0):
        print('{} is even number'.format(num))
    else:
        print('{} is odd number'.format(num))
even_odd(num)