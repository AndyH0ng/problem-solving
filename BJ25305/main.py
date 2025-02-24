#
#  커트라인
#  BJ25305
#
#  Created by 준우 on 2/24/25.
#

import sys
input = sys.stdin.readline

n, k = map(int, input().split())
print(sorted(int(x) for x in input().split())[-k])
