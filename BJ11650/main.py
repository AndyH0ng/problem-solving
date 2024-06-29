#
#  좌표 정렬하기
#  BJ11650
#
#  Created by 홍준우 on 6/29/24.
#

n = int(input())
lst = []
for _ in range(n):
    x, y = map(int, input().split())
    lst.append((x, y))
lst.sort()
for x, y in lst:
    print(x, y)