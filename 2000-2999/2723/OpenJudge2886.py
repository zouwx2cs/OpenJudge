# coding: utf-8
# -*- coding: utf-8 -*-

while True:
	try:
		n = int(input())
		sum = 0
		for i in range(0, n+1, 3):
			sum += i
		print(sum)
	except:
		break