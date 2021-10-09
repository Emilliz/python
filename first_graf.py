#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import math #Импорт библиотеки математических функций
import numpy #Создание векторов и матриц 
import matplotlib.pyplot as mpp #Построение графиков

# Эта программа рисует график функции, заданной выражением ниже

if __name__=='__main__': #Позволяет ввести модуль как переменную
    arguments = numpy.arange(0, 200, 0.1)  #задавание областей значения и определения
    mpp.plot( #Построение зависимости X от Y
        arguments, #все значения аргумента?
        [math.sin(a) * math.sin(a/20.0) for a in arguments] #Задает функцию 
    )
    mpp.show() #рисует график функции
