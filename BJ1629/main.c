//
//  곱셈
//  BJ1629
//
//  Created by 준우 on 9/20/24.
//

#include <stdio.h>

int c;
long long recursion(int a, int b);

int main(void) {
    int a, b;
    scanf("%d %d %d", &a, &b, &c);
    printf("%lld", recursion(a % c, b));
    return 0;
}

long long recursion(int a, int b) {
    if (b > 1) {
        long long tmp = recursion(a, b / 2);
        return b % 2 ? ((tmp * tmp) % c * a) % c : (tmp * tmp) % c;
    }
    return a;
}
