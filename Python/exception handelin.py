# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"throughable is the superclass of exception and error"""
x=int(input("Enter the number: "))
if x>5:
    raise Exception('X value should not exceed value 5 and your value is:{} '.format(x))
else:
    print(x)
a=int(input("Enter number: "))
b=int(input("Enter another number: "))
try:
    res=a/b
    print("result",res)
except:
    print("Exception handeled")