# -*- coding: utf-8 -*-
"""
Created on Mon Mar 15 12:47:28 2021

@author: Manish
"""
import wolframalpha
inpt=input("Question : ")
app_id='HH8G8G-Q27VHE58WX'
client=wolframalpha.Client(app_id)
res=client.query(inpt)
answer=next(res.results).text

print(str(answer))
