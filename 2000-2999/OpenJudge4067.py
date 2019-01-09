# coding: utf-8
# -*- coding: utf-8 -*-

while True:
	try:
		str = input()
		print("YES" if str == str[::-1] else "NO")
	except:
		break