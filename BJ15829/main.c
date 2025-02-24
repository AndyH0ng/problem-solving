//
//  Hashing
//  BJ15829
//
//  Created by 준우 on 2/21/25.
//

#include <stdio.h>
#include <math.h>
#define m 1234567891

int main(void) {
    int l;
    long long h = 0, r = 1;
    scanf("%d", &l);
    char a[l];
    scanf("%s", a);
    for (int i = 0; i < l; i++) {
        h += ((a[i] - 96) * r) % m;
        r = (r * 31) % m;
    }
    printf("%lld", h % m);
    return 0;
}
