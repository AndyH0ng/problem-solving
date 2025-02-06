//
//  다리 놓기
//  BJ1010
//
//  Created by 준우 on 10/4/24.
//

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        unsigned long long tmp = 1;
        scanf("%d %d", &n, &m);
        for (int i = 1; i <= n; tmp /= i++)
            tmp *= m - i + 1;
        printf("%lld\n", tmp);
    }
    return 0;
}
