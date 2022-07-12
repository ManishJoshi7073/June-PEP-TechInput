# -*- coding: utf-8 -*-
"""
Created on Wed Aug 12 14:15:14 2020

@author: Manish
"""


print("This is a qustionare for checking yo're Covid+ or Covid- ")

print("You have to answer as and you will be awarded as points \n  3.yes, 2.Rarely or 1.No")

print("Q1. Are you Feeling sick ? : ")
a1=int(input("Press 2.yes or 1.No "))
print("Q2. Are you suffering from headache? : ")
a2=int(input("Press 3.yes, 2.Rarely or 1.No "))
print("Q3. Overseas Travel : ")
a3=int(input("Press 2.yes or 1.No"))
print("Q4. what is your highest Temperature above 98.6 ? : ")
a4=int(input("Press 3.yes, 2.Rarely or 1.No "))
print("Q5. Do you Feel runny nose sore throat cough : ")
a5=int(input("Press 3.yes, 2.Rarely or 1.No"))
print("Q6. Do you feel like you are suffering fever: ")
a6=int(input("Press 3.yes, 2.Rarely or 1.No "))
print("Q7. Do you feel Shortness in breath ? : ")
a7=int(input("Press 3.yes, 2.Rarely or 1.No "))
rs=int(a1+a2+a3+a4+a5+a6+a7)

if(rs>=18):
    print("yo're Covid+ Your score is As your score is: ", rs)
elif(rs<12):
        print("You're having moderate Symptoms As your score is:  ", rs)
else:
        print("You're safe Stay home stay healthy As your score is:", rs)


