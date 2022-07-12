# -*- coding: utf-8 -*-
"""
Created on Mon Nov  2 12:15:44 2020

@author: Manish
"""

import turtle
from turtle import *
t=turtle.Turtle()
t.shape('turtle')
turtle.bgcolor('black')
def make_triangle(x,y,color):
    t.penup()
    t.goto(x,y)
    t.begin_fill()
    t.color(color)
    t.pendown()
    for i in range(3):
        t.forward(50)
        t.left(120)
    t.end_fill()
def make_square(x,y,color):
    t.penup()
    t.goto(x,y)
    t.begin_fill()
    t.color(color)
    t.pendown()
    for j in range(3):
        t.forward(50)
        t.left(90)
    t.end_fill()
    t.penup()
t.goto(0,-150)
t.color('#ff6600')
t.begin_fill()
t.circle(150)
t.end_fill()
t.left(180)
make_triangle(-35,-20,'#000000')
make_triangle(0,-20,'#000000')
make_triangle(35,-20,'#000000')
make_triangle(70,-20,'#000000')
t.left(180)
make_triangle(-70,50,'#000000')
make_triangle(50,0,'#000000')
make_square(-20,125,'#006600')
t.penup()
t.goto(-100,-185)
t.write('Happy Halloween!!!',font=("Arial",36,'normal'))
t.end(180)
turtle.done()