//
//  A + B - 3
//  BJ10950
//
//  Created by 준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int t, a, b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
