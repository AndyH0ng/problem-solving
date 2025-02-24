#
#  보물
#  BJ1026
#
#  Created by 준우 on 2/24/25.
#

import sys
input = sys.stdin.readline

n = int(input())
a, b = sorted(int(i) for i in input().split()), sorted((int(i) for i in input().split()), reverse=True)
print(sum([a[i]*b[i] for i in range(n)]))