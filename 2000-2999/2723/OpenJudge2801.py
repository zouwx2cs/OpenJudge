# coding: utf-8
# -*- coding: utf-8 -*-
n, m, p = input().split()
n = int(n)
p = int(p)
cnts = [0] * 26

for i in range(n):
    str = input()
    for ch in str:
        cnts[ord(ch) - ord('A')] += 1
for i in range(p):
    str = input()
    for ch in str:
        cnts[ord(ch) - ord('A')] -= 1
for i in range(len(cnts)):
    if (cnts[i] > 0):
        while cnts[i] > 0:
            print("%c" % (i + ord('A')), end='')
            cnts[i] -= 1
print('')