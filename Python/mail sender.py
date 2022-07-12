# -*- coding: utf-8 -*-
"""
Created on Fri Oct  9 15:37:35 2020

@author: Manish
"""

from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
import smtplib
from getpass import getpass
msg=MIMEMultipart()
message=input('Enter the message: ')

password=getpass('Enter the password: ')
msg['From']=input('Enter your email address: ')
msg['To']=input('Enter the recievers email address: ')
msg['Subject']=input('Enter the subject: ')

#message body
msg.attach(MIMEText(message,'plain'))
#create server
server=smtplib.SMTP('smtp.gmail.com:587')
server.starttls()

#login credentials for sending mail
server.login(msg['from'],password)

#send message via server
server.sendmail(msg['From'],msg['To'],msg.as_string())
server.quit()

print('Successfully sent mail to %s:'%(msg['To']))