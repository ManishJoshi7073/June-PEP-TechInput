# -*- coding: utf-8 -*-
"""
Created on Wed Aug 19 14:31:19 2020

@author: Manish
"""

class InvalidRange(Exception):
    pass
try:
    marks=int(input('Enter the marks: '))
    if(marks<0) or (marks>100):
        raise InvalidRange
        print('Marks: ',marks)
except InvalidRange:
    print("Out of range");
except ValueError:
    print("Invalid value");

class NotElegible(Exception):
    pass
try:
    Name=input('Enter your Name: ')
    age=int(input('ENter your Age: '))
    if(age<18):
        raise NotElegible
        print('Age: ',age)
    else:
        print('name: ',Name)
        print('Age: ',age)
        print('You are registered for voters card, Thankyou')
except NotElegible:
    print("Less then minimum");
except ValueError:
    print("Invalid value");
