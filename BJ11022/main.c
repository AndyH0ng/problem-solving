//
//  A + B - 8
//  BJ11022
//
//  Created by 준우 on 8/7/24.
//

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n",
               i, a, b, a + b);
    }
    return 0;
}
