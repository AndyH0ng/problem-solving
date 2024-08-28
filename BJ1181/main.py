#
#  단어 정렬
#  BJ1181
#
#  Created by 홍준우 on 6/26/24.
#

 words = [input() for _ in range(int(input()))]
 words.sort()
 dic = {word: len(word) for word in words}
 li = dict(sorted(dic.items(), key=lambda x:x[1]))
 for i in list(li.keys()): print(i)
