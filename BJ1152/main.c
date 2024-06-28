//
//  단어의 개수
//  BJ1152
//
//  Created by 홍준우 on 6/27/24.
//

#include <stdio.h>

int main(void) {
    int i, cnt = 0;
    char ch[1000001];
    scanf("%[^\n]s", ch);
    for (i = 1; ch[i] != '\0'; i++) {
        if (ch[i] == ' ') cnt++;
    }
    if (ch[i - 1] == ' ') cnt--;
    printf("%d", ++cnt);
    return 0;
}
