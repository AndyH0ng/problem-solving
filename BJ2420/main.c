//
//  사파리월드
//  BJ2420
//
//  Created by 홍준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    long long n, m;
    scanf("%lld %lld", &n, &m);
    if (n >= m) printf("%lld", n - m);
    else printf("%lld", m - n);
    return 0;
}
