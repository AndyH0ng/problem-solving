#
#  OX퀴즈
#  BJ8958
#
#  Created by 홍준우 on 6/30/24.
#

for _ in range(int(input())):
    score = tmp = 0
    for ch in input():
        if ch == 'O':
            tmp += 1
            score += tmp
        else: tmp = 0
    print(score)
