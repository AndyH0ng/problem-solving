n = int(input())
lst = [input().split() for _ in range(n)]
lst.sort(key=lambda x: int(x[0]))
[print(i[0], i[1]) for i in lst]
