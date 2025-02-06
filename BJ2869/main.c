//
//  달팽이는 올라가고 싶다
//  BJ2869
//
//  Created by 준우 on 6/30/24.
//

#include <stdio.h>

int main(void) {
    long long a, b, v, cnt;
    scanf("%lld %lld %lld", &a, &b, &v);
    cnt = (v - a) / (a - b) + 1;
    if ((v - a) % (a - b) != 0) cnt++;
    printf("%lld", cnt);
    return 0;
}
