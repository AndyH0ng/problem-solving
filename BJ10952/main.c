//
//  A + B - 5
//  BJ10952
//
//  Created by 준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int a, b;
    while (scanf("%d %d", &a, &b)) {
        if (a && b) printf("%d\n", a + b);
        else return 0;
    }
    return 0;
}
