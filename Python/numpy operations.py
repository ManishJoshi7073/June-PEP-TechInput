# -*- coding: utf-8 -*-
"""
Created on Mon Sep 14 14:43:36 2020

@author: Manish
"""

import numpy as np
arr1=np.arange(0,9).reshape(3,3)
arr2=np.arange(9,18).reshape(3,3)
arr3=arr1+arr2
print('Array1:-')
print(arr1)
print('Array2:-')
print(arr2)
print('Sum of both the array :-')
print(arr3)