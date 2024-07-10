#
#  진법 변환
#  BJ2745
#
#  Created by 홍준우 on 7/10/24.
#

n, b = input().split()
sum = 0
for i in range(len(n)):
    sum += (int(n[i]) if n[i].isdigit() else ord(n[i]) - 55) * int(b) ** (len(n) - i - 1)
print(sum)