#
#  패리티
#  BJ4597
#
#  Created by 준우 on 2/7/25.
#

import sys
input = sys.stdin.readline

while True:
    prt = input().strip()
    if prt == '#': break
    else:
        data, key = prt[:-1], prt[-1]
        odd = data.count('1') % 2
        if (key == 'e' and odd == 1) or (key == 'o' and odd == 0):
            print(data + '1')
        else:
            print(data + '0')
