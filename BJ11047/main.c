//
//  동전 0
//  BJ11047
//
//  Created by 준우 on 2/17/25.
//

#include <stdio.h>

int main(void) {
    int n, k, i, cnt = 0;
    scanf("%d %d", &n, &k);
    int coin[n];
    for (i = 0; i < n; i++) scanf("%d", &coin[i]);
    while (i--) {
        cnt += k / coin[i];
        k %= coin[i];
    }
    printf("%d", cnt);
    return 0;
}

// 반드시 큰 쪽은 작은 쪽 액수의 배수이기에 그리디 알고리즘을 사용할 수 있다.
