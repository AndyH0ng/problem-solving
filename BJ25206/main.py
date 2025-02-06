#
#  너의 평점은
#  BJ25206
#
#  Created by 준우 on 7/14/24.
#

total = div = 0
lst = ['F', None, 'D0', 'D+', 'C0', 'C+', 'B0', 'B+', 'A0', 'A+']

for _ in range(20):
    i, j, k = input().split()
    if k in lst:
        total += float(j) * lst.index(k) * 0.5
        div += float(j)
print(total / div)
