#!/usr/bin/env python3
# -*- coding: gb2312 -*-

'''
Created on 2017��12��4��

@author: �ƻ�k
'''
import sys
from sys import argv, path

# ����ע��
if True:
    print("True", end=" ")
    print('dsadasd')  # ��˫������ȫһ��
else:
    print("False")  # ����Ҫһ��
    
cc1 = 1
cc2 = 2
cc3 = 3
print('paths:', path)
for i in sys.argv:
    print('i = ', i)
print('\n python ·��Ϊ', sys.path)
kk = cc1 + \
     cc2 + \
     cc3
del kk  # ɾ������
# print('kk=', kk)
cc = ['cc1', 'cc2', 'cc3']
print('cc1= ',end='');print(cc[0])
print('cc= ', end='');print(cc);print('cc s Type is: ', end='');print(type(cc))
kkcc = "'dasd�ƻ�kdsada'"
print("������:" + kkcc[5:8] * 2)
sys.stdout.write(kkcc[-8]+ kkcc[-9]+ kkcc[-7]+'\n')
# print(kkcc[-8], kkcc[-9], kkcc[-7])#�����ƫ��
paragraph = """����һ�����䣬
�ڶ���
�����С�"""
print(paragraph)
cc = input("1 or 2 ?" + '\n')
if cc == '1':
    sys.stdout.write('1' + '\n')
elif cc == '2':
    sys.stdout.write('2' + '\n')
tinydict={'1':'dasdsa','2':'dasda'}
print(tinydict['1'])
