//
//  소수 구하기
//  BJ1929
//
//  Created by 준우 on 7/5/24.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++) {
        int isPrime = 1;
        int root = (int)sqrt(i);
        if (i == 1) continue;
        for (int j = 2; j <= root; j++) {
            if (i % j == 0) {
                isPrime--;
                break;
            }
        }
        if (isPrime) printf("%d\n", i);
    }
    return 0;
}
