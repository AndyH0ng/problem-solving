//
//  단어 길이 재기
//  BJ2743
//
//  Created by 홍준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    char ch[101];
    scanf("%s", ch);
    int i = 0;
    while (ch[i] != '\0') i++;
    printf("%d", i++);
    return 0;
}
