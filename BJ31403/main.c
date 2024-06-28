//
//  A + B - C
//  BJ31403
//
//  Created by 홍준우 on 6/21/24.
//

#include <stdio.h>

int main(void) {
    long long a, b, c, tmp = 0;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (b < 10) tmp = a * 10 + b - c;
    else if (b < 100) tmp = a * 100 + b - c;
    else if (b < 1000) tmp = a * 1000 + b - c;
    else tmp = a * 10000 + b - c;
    printf("%lld\n%lld", a + b - c, tmp);
    return 0;
}
