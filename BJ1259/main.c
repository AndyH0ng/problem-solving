//
//  팰린드롬수
//  BJ1259
//
//  Created by 홍준우 on 6/24/24.
//

#include <stdio.h>

int main(void) {
    int n, m;
    while (1) {
        scanf("%d", &n);
        int tmp = n;
        m = 0;
        if (n == 0) return 0;
        for (int i = n; i > 0; i /= 10) {
            m *= 10;
            m += i % 10;
            tmp /= 10;
        }
        if (m == n) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
