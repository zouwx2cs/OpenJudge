# coding: utf-8
# -*- coding: utf-8 -*-

for a in range(1, 101):
	for b in range(a, 101):
		s2 = a**2 + b**2
		s = int(s2**0.5)
		if s**2 == s2 and s <= 100:
			print("%d*%d + %d*%d = %d*%d" % (a, a, b, b, s, s))