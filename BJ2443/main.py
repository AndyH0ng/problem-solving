#
#  별 찍기 - 6
#  BJ2443
#
#  Created by 준우 on 6/21/24.
#

n = int(input())
for i in range(n, 0, -1):
    print(' ' * (n - i) + '*' * (2 * i - 1))
