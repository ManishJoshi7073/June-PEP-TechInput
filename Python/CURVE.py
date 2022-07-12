# -*- coding: utf-8 -*-
"""
Created on Thu Sep 24 14:30:32 2020

@author: Manish
"""

import matplotlib.pyplot as plt
import numpy as np
states=['Delhi','Uttrakhand','Mumbia','Gujrat','Rajasthan']
pop=[1.6,2.9,6.3,0.3,3.0]
figure=plt.figure(figsize=(6,4))
plt.plot(states,pop,'b^-')
plt.title('Curve between States Vs POpulation',color='magenta',fontsize=12,fontweight='bold')
plt.xlabel('State',color='Red');
plt.ylabel('Population',color='Blue');
plt.show()