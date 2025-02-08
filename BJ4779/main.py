#
#  칸토어 집합
#  BJ4779
#
#  Created by 준우 on 2/8/25.
#

import sys
input = sys.stdin.readline

def recur(n, begin):
    if n == 1: return
    for i in range(begin + n//3, begin + n//3*2):
        ctr[i] = ' '
    recur(n//3, begin)
    recur(n//3, begin + n//3*2)

while True:
    try:
        n = 3 ** int(input())
        ctr = ['-' for _ in range(n)]
        recur(n, 0)
        print(''.join(ctr))
    except: break