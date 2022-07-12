# -*- coding: utf-8 -*-
"""
Created on Thu Aug 27 14:34:03 2020

@author: Manish
"""

fname=input('Enter file name: ')
try:
    f=open(fname,'r')
except IOError:
    print('No file  having this name: ')
finally:
    f.close()
    print('File closed successfully')