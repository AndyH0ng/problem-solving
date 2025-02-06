//
//  곱셈
//  BJ2588
//
//  Created by 준우 on 6/21/24.
//

#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int i = 3;
    int tmp = n * m;
    while (i--) {
        printf("%d\n", n * (m % 10));
        m /= 10;
    }
    printf("%d", tmp);
    return 0;
}
