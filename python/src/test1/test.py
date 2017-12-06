#!/usr/bin/env python3
# -*- coding: gb2312 -*-

'''
Created on 2017年12月4日

@author: 黄黄k
'''
import sys
from sys import argv, path

# 我是注释
if True:
    print("True", end=" ")
    print('dsadasd')  # 单双引号完全一样
else:
    print("False")  # 缩进要一致
    
cc1 = 1
cc2 = 2
cc3 = 3
print('paths:', path)
for i in sys.argv:
    print('i = ', i)
print('\n python 路径为', sys.path)
kk = cc1 + \
     cc2 + \
     cc3
del kk  # 删除变量
# print('kk=', kk)
cc = ['cc1', 'cc2', 'cc3']
print('cc1= ',end='');print(cc[0])
print('cc= ', end='');print(cc);print('cc s Type is: ', end='');print(type(cc))
kkcc = "'dasd黄黄kdsada'"
print("名字是:" + kkcc[5:8] * 2)
sys.stdout.write(kkcc[-8]+ kkcc[-9]+ kkcc[-7]+'\n')
# print(kkcc[-8], kkcc[-9], kkcc[-7])#输出有偏移
paragraph = """这是一个段落，
第二行
第三行。"""
print(paragraph)
cc = input("1 or 2 ?" + '\n')
if cc == '1':
    sys.stdout.write('1' + '\n')
elif cc == '2':
    sys.stdout.write('2' + '\n')
tinydict={'1':'dasdsa','2':'dasda'}
print(tinydict['1'])
