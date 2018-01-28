# coding: utf-8
# -*- coding: utf-8 -*-

T = int(input())
for t in range(T):
	s, e = input().split(' ')
	#print s, e
	if s == e:
		print("0 0 0 0")
		continue 
	
	sx = ord(s[0]) - ord('a') + 1
	sy = int(s[1])
	
	ex = ord(e[0]) - ord('a') + 1
	ey = int(e[1])
	
	w = abs(sx - ex) if abs(sx-ex) > abs(sy-ey) else abs(sy-ey)
	h = c = 2
	x = 'Inf'
	
	if sx == ex or sy == ey:
		h = c = 1
		
	if sx-sy == ex-ey or sx+sy == ex+ey:
		h = 1
		x = '1'
	elif (sx+sy)%2 == (ex+ey)%2:
		x = '2'
		
	print("%d %d %d %s" % (w, h, c, x))