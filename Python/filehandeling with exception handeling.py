# -*- coding: utf-8 -*-
"""
Created on Thu Aug 27 12:49:49 2020

@author: Manish
"""

class invalidFileName(Exception):
    pass
try:
    fname='sample.txt'
    fuser=input('ENter the file name: ')
    if fuser==fname:
        filee = open(fname,"r+")
        if filee:    
            print("file is opened successfully")  
    else:
        raise invalidFileName
except invalidFileName:
    print('Invalid file name')