//
//  문자열 반복
//  BJ2675
//
//  Created by 홍준우 on 8/17/24.
//

#include <stdio.h>

int main(void) {
    int t, r;
    char s[21];
    scanf("%d", &t);
    while (t--) {
        scanf("%d %s", &r, s);
        for (int i = 0; s[i] != '\0'; i++)
            for (int j = 0; j < r; j++)
                printf("%c", s[i]);
        printf("\n");
    }
    return 0;
}
