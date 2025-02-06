//
//  주사위 세개
//  BJ2480
//
//  Created by 준우 on 6/21/24.
//

#include <stdio.h>

int main(void) {
    int a, b, c, tmp;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        tmp = 10000 + a * 1000;
    else if (a == b || a == c)
        tmp = 1000 + a * 100;
    else if (b == c)
        tmp = 1000 + b * 100;
    else {
        if ((a > b && b > c) || (a > c && c > b))
            tmp = a * 100;
        else if ((b > a && a > c) || (b > c && c > a))
            tmp = b * 100;
        else
            tmp = c * 100;
    }
    printf("%d", tmp);
    return 0;
}
