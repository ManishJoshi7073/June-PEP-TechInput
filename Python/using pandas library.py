# -*- coding: utf-8 -*-
"""
Created on Thu Aug 27 19:49:24 2020

@author: Manish
"""

import pandas as pd
loc=('Chemical.xlsx')
wb=pd.read_excel(loc)
wb['Total']=wb['X1']+wb['X2']
def double_x1(num):
    return num*2
wb['double']=double_x1(wb['X1'])
a=wb.head()
print(a)