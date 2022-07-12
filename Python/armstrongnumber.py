# -*- coding: utf-8 -*-
"""
Created on Wed Aug  5 14:36:27 2020

@author: Manish
"""

num = int(input("Enter a number: "))  
def armst(num):
    sum = 0  
    temp = num
    while temp > 0:  
       digit = temp % 10  
       sum += digit ** 3  
       temp = temp//10  
    if num == sum:  
       print(num,"is an Armstrong number")  
    else:  
       print(num,"is not an Armstrong number")  
armst(num)