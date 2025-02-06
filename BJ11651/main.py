#
#  좌표 정렬하기 2
#  BJ11651
#
#  Created by 준우 on 7/11/24.
#

lst = [(x, y) for x, y in [map(int, input().split()) for _ in range(int(input()))]]
lst.sort(key=lambda crd: (crd[1], crd[0]))
for x, y in lst: print(x, y)
