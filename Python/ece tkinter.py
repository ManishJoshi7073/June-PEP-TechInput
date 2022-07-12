# -*- coding: utf-8 -*-
"""
Created on Fri Sep 25 15:39:07 2020

@author: Manish
""" 
import tkinter as tk
 
def addNumbers():
    res=int(e1.get())+int(e2.get())
    print('You have pressed +')
    myText.set(res)
def subNumbers():
    res=int(e1.get())-int(e2.get())
    print('You have pressed -')
    myText.set(res)
def mulNumbers():
    res=int(e1.get())*int(e2.get())
    print('You have pressed *')
    myText.set(res)
def divNumbers():
    res=int(e1.get())/int(e2.get())
    print('You have pressed /')
    myText.set(res)
master = tk.Tk()
myText=tk.StringVar()
tk.Label(master, text="First").grid(row=0)
tk.Label(master, text="Second").grid(row=1)
tk.Label(master, text="Result:").grid(row=3)
result=tk.Label(master, text="", textvariable=myText).grid(row=3,column=1)

e1 = tk.Entry(master)
e2 = tk.Entry(master)
 
e1.grid(row=0, column=1)
e2.grid(row=1, column=1)
 
b = tk.Button(master, text="+", command=addNumbers)
b.grid(row=0, column=2)
c = tk.Button(master, text="-", command=subNumbers)
c.grid(row=0, column=3)
d = tk.Button(master, text="*", command=mulNumbers)
d.grid(row=0, column=4)
e = tk.Button(master, text="/", command=divNumbers)
e.grid(row=0, column=5)
 
tk.mainloop()