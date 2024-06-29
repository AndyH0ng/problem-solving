//
//  직각삼각형
//  BJ4153
//
//  Created by 홍준우 on 6/30/24.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 &&
            b == 0 &&
            c == 0) {
            return 0;
        }
        else if (pow(a, 2) + pow(b, 2) == pow(c, 2) ||
                 pow(a, 2) + pow(c, 2) == pow(b, 2) ||
                 pow(b, 2) + pow(c, 2) == pow(a, 2)) {
            printf("right\n");
        } else {
            printf("wrong\n");
        }
    }
    return 0;
}
