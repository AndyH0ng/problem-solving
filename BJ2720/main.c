//
//  세탁소 사장 동혁
//  BJ2720
//
//  Created by 홍준우 on 6/30/24.
//

#include <stdio.h>
#define rem(ipt, i) ipt % i;

int ipt;

int main(void) {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &ipt);
        printf("%d", ipt / 25);
        ipt = rem(ipt, 25);
        printf(" %d", ipt / 10);
        ipt = rem(ipt, 10);
        printf(" %d", ipt / 5);
        ipt = rem(ipt, 5);
        printf(" %d\n", ipt);
    }
    return 0;
}
