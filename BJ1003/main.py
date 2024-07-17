#
#  피보나치 함수
#  BJ1003
#
#  Created by 홍준우 on 7/13/24.
#

import sys

def fibb(n, lst):
    if n == 0:
        lst[0] = [1, 0]
    elif n == 1:
        lst[:2] = [[1, 0], [0, 1]]
    else:
        if lst[n - 1][0] == 0 and lst[n - 1][1] == 0:
            fibb(n - 1, lst)
        lst[n][0] = lst[n - 1][0] + lst[n - 2][0]
        lst[n][1] = lst[n - 1][1] + lst[n - 2][1]


lst = [[0, 0] for _ in range(41)]

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    fibb(n, lst)
    print(lst[n][0], lst[n][1])
