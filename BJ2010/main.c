//
//  플러그
//  BJ2010
//
//  Created by 홍준우 on 8/29/24.
//

#include <stdio.h>

int main(void) {
    int n, tmp;
    scanf("%d", &n);
    int sum = 1 - n;
    while (n--) {
        scanf("%d", &tmp);
        sum += tmp;
    }
    printf("%d", sum);
    return 0;
}

