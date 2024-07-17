#
#  수 정렬하기 2
#  BJ2751
#
#  Created by 홍준우 on 7/11/24.
#

import sys

lst = [int(sys.stdin.readline()) for _ in range(int(input()))]
lst.sort()
for i in lst: print(i)
