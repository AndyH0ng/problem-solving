#
#  문자열 반복
#  BJ2675
#
#  Created by 준우 on 7/6/24.
#

for _ in range(int(input())):
    r, s = input().split()
    r = int(r)
    for ch in s:
        print(ch * r, end='')
    print()
