# -*- coding: utf-8 -*-
"""
Created on Wed Aug 19 14:28:01 2020

@author: Manish
"""

import sys 
try:
    num=int(input("ENter the numerator: "))
    dnum=int(input("ENter the denominator: "))
    sum=num+dnum
    print('Sum',sum)
    quot=num//dnum
    print('quotient= ',quot)
except (ValueError,TypeError):
    print('Invalid input error',sys.exc_info()[0])
except ZeroDivisionError:
    print('Divided by zero error')
try:
    marks=int(input('Enter the Marks: '))
    if(marks<=0) or(marks>100):
        raise ValueError
except ValueError:
    print('Value out of bound')
finally:
    print('Code will execute no matter what is input')
print('ENd of program')