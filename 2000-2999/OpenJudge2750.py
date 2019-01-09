# coding: utf-8
# -*- coding: utf-8 -*-

a = int(input())

if a&1 == 1:
	print("0 0")
else:
	print((a//4 if a&2 == 0 else a//4+1), a//2)