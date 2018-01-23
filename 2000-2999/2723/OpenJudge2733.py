# coding: utf-8
# -*- coding: utf-9 -*-

a = int(input())
print("Y" if (a%400 == 0 or a%4 == 0 and a%100 != 0) else "N")

