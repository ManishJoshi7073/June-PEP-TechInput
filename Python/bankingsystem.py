# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""    
sbalance=int(50000)
cbalance=int(600000)
toal=cbalance+sbalance
print('1. Withdrwal ')
print('2. Enquiry aamount ')
print('3. Deposit')
def withdrwal(sbalance,cbalance):
    print('Welcomr ot cash withdrwal menu: ');
    print('1. for saving account ')
    print('2. for Current account ')
    choice=int(input("ENter the choice: "))
    amt=int(input("Amount you want: " ))
    if choice==1:
        sbalance-=amt
        print("Thankyou for using our service: ")
        print("balance amount is: ",sbalance)
    elif choice==2:
        cbalance-=amt
        print("Balance amount is: ",cbalance)
        print("Thankyou for using our service: ")
    else:
        print("Not valid choice")
def beqr():
    print("Amount in account is: ",toal)
def depositt(toal):
    print("Enter the amount to be deposited: ")
    depo=int(input("Enter the amount: "))
    toal+=depo
    print("deposited amount is {} and total amount is {}".format(depo,toal ))
    
choicee=int(input("ENter your choice: "))
if choicee==1:
    withdrwal(sbalance,cbalance)
elif choicee==2:
    beqr()
elif choicee==3:
    depositt(toal)
else:
    print("Enter valid value: ")    

            
        
    
    