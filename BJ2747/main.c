//
//  피보나치 수
//  BJ2747
//
//  DP: 이미 계산한 값을 저장하여 여러번 계산을 수행하지 않고
//      재활용하여 효율적으로 결과값을 구한다.
//
//  Created by 준우 on 7/5/24.
//

#include <stdio.h>

long long fibb[45] = {0, };

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

