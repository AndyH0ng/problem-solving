#
#  쿼드트리
#  BJ1992
#
#  Created by 준우 on 2/7/24.
#

import sys
input = sys.stdin.readline

def isGrouped(x, y, n):
    tmp = img[y][x]
    for i in range(n):
        for j in range(n):
            if img[y + j][x + i] is not tmp:
                return False
    return True

def cprs(i, j, n):
    if isGrouped(i, j, n): print(img[j][i], end="")
    else:
        print("(", end="")
        cprs(i, j, n // 2)
        cprs(i + n // 2, j, n // 2)
        cprs(i, j + n // 2, n // 2)
        cprs(i + n // 2, j + n // 2, n // 2)
        print(")", end="")

n = int(input())
img = [input().strip() for _ in range(n)]
cprs(0, 0, n)