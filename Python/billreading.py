# -*- coding: utf-8 -*-
"""
Created on Thu Aug  6 15:39:42 2020

@author: Manish
"""

x=int(input("Enter the reading: "))
if x<=100:
    print("Bill Is: ",x*5.95)
elif x>100:
     print("Bill Is: ",x*6.95)
else:
         print("Enter Valid Value: ")