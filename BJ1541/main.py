#
#  잃어버린 괄호
#  BJ1541
#
#  Created by 준우 on 2/17/25.
#

import sys
input = sys.stdin.readline

lst = input().split('-')
result = sum(map(int, lst[0].split('+')))
for i in lst[1:]:
    tmp = 0
    tmp += sum(map(int, i.split('+')))
    result -= tmp
print(result)