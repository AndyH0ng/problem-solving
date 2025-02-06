//
//  피보나치 수 2
//  BJ2748
//
//  Created by 준우 on 7/5/24.
//

#include <stdio.h>

long long fibb[90] = {0, };

void dp(int i) {
    if (i < 2)
        fibb[i] = i;
    
    else {
        if (fibb[i - 1] == 0) {
            dp(i - 1);
        }
        fibb[i] = fibb[i - 1] + fibb[i - 2];
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    dp(n);
    printf("%lld", fibb[n]);
    return 0;
}
