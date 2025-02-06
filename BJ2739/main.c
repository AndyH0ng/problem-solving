//
//  구구단
//  BJ2739
//
//  Created by 준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int n, i = 1;
    scanf("%d", &n);
    while (i < 10) {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}
