//
//  1, 2, 3 더하기
//  BJ9095
//
//  Created by 준우 on 2/8/25.
//

#include <stdio.h>

int dp[11] = {-1, 1, 2, 4, };

int recur(int i) {
    if (dp[i]) return dp[i];
    return dp[i] = recur(i - 1) + recur(i - 2) + recur(i - 3);
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", recur(n));
    }
    return 0;
}
