# -*- coding: utf-8 -*-
"""
Created on Wed Aug 26 20:13:22 2020

@author: Manish
"""
fileObject=open('sample.txt','w')
fileObject.write('Hello my name is manish')
fileObject.close()
fileObject=open('sample.txt','r')
data=fileObject.read()
print(data)

    