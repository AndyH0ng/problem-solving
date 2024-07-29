//
//  요세푸스 문제
//  BJ1158
//
//  Created by 홍준우 on 7/26/24.
//

#include <stdio.h>
#define SIZE 5001
#define isTrue *(lst + idx) = 1

int main(void) {
    int n, k;
    _Bool lst[SIZE] = {0, };
    scanf("%d %d", &n, &k);
    int idx = k;
    isTrue;
    printf("<%d", idx);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < k; j++) {
            while (1) {
                if (++idx > n) idx = 1;
                if (!*(lst + idx)) break;
            }
        }
        isTrue;
        printf(", %d", idx);
    }
    printf(">");
    return 0;
}
