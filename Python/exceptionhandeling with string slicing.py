# -*- coding: utf-8 -*-
"""
Created on Thu Aug 20 14:48:44 2020

@author: Manish
"""

limit=int(input("ENter the limit: "))
class outBound(Exception):
    pass
try:
    if limit>20:
        raise outBound
    else:
        str1='X-DSPAM-Confidence: 0.8475'
        str11=str1[0:limit]
        print(str11)
        print('Length of string: ',len(str11))
        flpt=str1[20:26]
        print(flpt)  
except outBound:
    print("Value is out of bound only 20 character is available")