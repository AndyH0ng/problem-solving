//
//  A + B - 7
//  BJ11021
//
//  Created by 홍준우 on 8/7/24.
//

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);
    }
    return 0;
}
