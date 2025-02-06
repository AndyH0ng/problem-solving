//
//  배수와 약수
//  BJ5086
//
//  Created by 준우 on 7/2/24.
//

#include <stdio.h>

int main(void) {
    int n, m;
    while (1) {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) break;
        if (!(n % m)) printf("multiple\n");
        else if (!(m % n)) printf("factor\n");
        else printf("neither\n");
    }
    return 0;
}
