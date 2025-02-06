//
//  상수
//  BJ2908
//
//  Created by 준우 on 8/31/24.
//

#include <stdio.h>

int rvse(int n) {
    int sum = 0;
    for (int i = n, j = 100; i > 0; i /= 10, j /= 10)
        sum += i % 10 * j;
    return sum;
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    a = rvse(a);
    b = rvse(b);
    printf("%d\n", a > b ? a : b);
    return 0;
}
