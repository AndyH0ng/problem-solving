//
//  웰컴 키트
//  BJ30802
//
//  Created by 홍준우 on 6/24/24.
//

#include <stdio.h>

int main(void) {
    int n, t, p, submit[6], cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < 6; i++)
        scanf("%d", &submit[i]);
    scanf("%d %d", &t, &p);
    for (int i = 0; i < 6; i++) {
        cnt += submit[i] / t;
        if (submit[i] % t) cnt++;
    }
    printf("%d\n%d %d", cnt, n / p, n % p);
    return 0;
}
