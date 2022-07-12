# -*- coding: utf-8 -*-
"""
Created on Thu Aug 27 19:43:38 2020

@author: Manish
"""

import xlrd
loc=('Chemical.xlsx')
wb=xlrd.open_workbook(loc)
sheet=wb.sheet_by_index(0)
for i in range(0,10):
    for j in range(0,5):
        print(sheet.cell_value(i,j),end=' ')