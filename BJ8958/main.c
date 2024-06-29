//
//  OX퀴즈
//  BJ8958
//
//  Created by 홍준우 on 6/29/24.
//

#include <stdio.h>

int main(void) {
    int n, tmp, score;
    char ch[81];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        score = tmp = 0;
        scanf("%s", ch);
        for (int i = 0; ch[i] != '\0'; i++) {
            if (ch[i] == 'O') score += ++tmp;
            else tmp = 0;
        }
        printf("%d\n", score);
    }
    return 0;
}
