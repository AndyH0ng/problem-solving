#
#  그룹 단어 체커
#  BJ1316
#
#  Created by 준우 on 7/18/24.
#

import sys

cnt = n = int(input())
for _ in range(n):
    tmp = sys.stdin.readline()
    for i in range(len(tmp) - 1):
        if tmp[i] == tmp[i + 1]: pass
        elif tmp[i] in tmp[i + 1:]:
            cnt -= 1
            break
print(cnt)
