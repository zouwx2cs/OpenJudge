# coding:utf-8
# -*- coding:utf-8 -*-

daysPerMonth = (0, 31, 28, 31, 30, 31, 30, \
				31, 31, 30, 31, 30)

days = int(input())

days += (13-1)
for i in range(12):
	days += daysPerMonth[i]
	if (days % 7 == 5):
		print(i+1)


