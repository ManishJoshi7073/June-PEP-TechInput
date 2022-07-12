# -*- coding: utf-8 -*-
"""
Created on Fri Oct 23 16:09:31 2020

@author: Manish
"""

import pyfirmata
import time

port='COM4' #ARDUINO PORT OBTAINED FROM ARDUINO IDE
board=pyfirmata.Arduino(port)
pwmPin=board.get_pin('d:3:p')

lst=[0.00,0.10,0.20,0.30,0.40,0.50,0.60,0.70,0.80,0.90,1.00]
while 1: 
    for i in lst:
        pwmPin.write(i)
        time.sleep(1)
        if(i==1.00):
            pwmPin.write(0)
            i=0.00

#duty cycle= T(on)/(T(on)+T(off))