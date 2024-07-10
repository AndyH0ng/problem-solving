#
#  듣보잡
#  BJ1764
#
#  Created by 홍준우 on 7/10/24.
#

n, m = map(int, input().split())
notSeen = {tuple(input().split()) for _ in range(n)}
notHeard = {tuple(input().split()) for _ in range(m)}
cnt = notSeen & notHeard
print(len(cnt))
for i in sorted(cnt): print(*i)