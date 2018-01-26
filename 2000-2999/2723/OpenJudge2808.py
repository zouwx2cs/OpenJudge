# coding: utf-8
# -*- coding: utf-8 -*-

L, M = input().split(" ")
L, M = int(L), int(M)
trees = [True]*(L+1)
for m in range(M):
    start, end = input().split(" ")
    start, end = int(start), int(end)
    for i in range(start, end+1):
        trees[i] = False
cnt = 0
for i in trees:
    if i:
        cnt += 1
print(cnt)

