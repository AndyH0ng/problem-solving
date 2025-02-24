#
#  소트인사이드
#  BJ1427
#
#  Created by 준우 on 2/24/25.
#

import sys
input = sys.stdin.readline

lst = sorted([int(i) for i in input().strip()], reverse=True)
for i in lst: print(i, end='')