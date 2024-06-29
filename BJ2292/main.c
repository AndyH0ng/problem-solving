//
//  벌집
//  BJ2292
//
//  Created by 홍준우 on 6/30/24.
//

#include <stdio.h>

int main(void) {
    int t = 0;
    long long n;
    scanf("%lld", &n);
    if (n != 1) {
        while (1) {
            if (1 + 3 * t * (t + 1) < n &&
                n <= 1 + 3 * (t + 1) * (t + 2)) {
                printf("%d", t + 2);
                break;
            }
            t++;
        }
    } else {
        printf("1");
    }
    return 0;
}
