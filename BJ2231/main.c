//
//  분해합
//  BJ2231
//
//  Created by 준우 on 6/30/24.
//

#include <stdio.h>

int main(void) {
    int n, i, sum;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        sum = i;
        for (int j = i; j > 0; j /= 10)
            sum += j % 10;
        if (n == sum) {
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
    return 0;
}
