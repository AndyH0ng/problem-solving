//
//  검증수
//  BJ2475
//
//  Created by 준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int n, result = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        result += n * n;
    }
    printf("%d", result % 10);
    return 0;
}
