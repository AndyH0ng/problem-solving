//
//  돌 게임 2
//  BJ9656
//
//  Created by 준우 on 2/17/25.
//

#include <stdio.h>
#define MIN(i, j) i < j ? i : j

int DP[1001] = {0, 1, 2, };
int recur(int i);

int main(void) {
    int n;
    scanf("%d", &n);
    printf((recur(n) % 2) ? "CY" : "SK");
    return 0;
}

int recur(int i) {
    if (i <= 2) return DP[i];
    for (int j = 3; j <= i; j++)
        DP[j] = MIN((DP[j - 1] + 1), (DP[j - 3] + 1));
    return DP[i];
}
