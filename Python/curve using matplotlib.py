# -*- coding: utf-8 -*-
"""
Created on Tue Sep 22 14:38:51 2020

@author: Manish
"""

import matplotlib.pyplot as plt
import numpy as np
states=['Delhi','Uttrakhand','Mumbia','Gujrat','Rajasthan']
pop=[1.6,2.9,6.3,0.3,3.0]
figure=plt.figure(figsize=(6,4))
plt.plot(states,pop,"g^-") #graph color change
plt.title('Curve between States Vs POpulation',color='magenta',fontsize=12,fontweight='bold')
#for graph title ^
plt.xlabel('<---States--->',color='blue' , fontsize=12 , fontweight='bold')
plt.ylabel('<---Population--->',color='Red' , fontsize=12 , fontweight='bold')

#Subplotting multiple graphs in single window.

plt.subplot(3,2,1)
plt.plot(states,pop,"g^-") #graph color change
plt.title('Curve between States Vs POpulation',color='magenta',fontsize=12,fontweight='bold')
#for graph title ^
plt.xlabel('<---States--->',color='blue' , fontsize=12 , fontweight='bold')
plt.ylabel('<---Population--->',color='Red' , fontsize=12 , fontweight='bold')

#Third graph
plt.subplot(3,2,2)
plt.plot(states,pop,"m^-") #graph color change
plt.title('Curve between States Vs POpulation',color='magenta',fontsize=12,fontweight='bold')
#for graph title ^
plt.xlabel('<---States--->',color='blue' , fontsize=12 , fontweight='bold')
plt.ylabel('<---Population--->',color='Red' , fontsize=12 , fontweight='bold')
plt.show()

#Fourth graph
plt.subplot(3,2,3)
plt.plot(states,pop,"b^-") #graph color change
plt.title('Curve between States Vs POpulation',color='magenta',fontsize=12,fontweight='bold')
#for graph title ^
plt.xlabel('<---States--->',color='blue' , fontsize=12 , fontweight='bold')
plt.ylabel('<---Population--->',color='Red' , fontsize=12 , fontweight='bold')
plt.show()