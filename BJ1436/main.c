//
//  영화감독 숌
//  BJ1436
//
//  Created by 준우 on 6/27/24.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    int i = 666, n, cnt = 0;
    char ch[8];
    scanf("%d", &n);
    while (1) {
        sprintf(ch, "%d", i);
        for (int j = 0; j < strlen(ch) - 2; j++) {
            if (ch[j] == '6' &&
                ch[j + 1] == '6' &&
                ch[j + 2] == '6') {
                cnt++;
                break;
            }
        }
        if (cnt == n) break;
        i++;
    }
    printf("%d", i);
    return 0;
}
