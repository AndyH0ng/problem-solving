//
//  돌 게임 (DP)
//  BJ9655
//
//  Created by 준우 on 10/29/24.
//

#include <stdio.h>
#define MIN(i, j) i < j ? i : j

int DP[1001] = {0, 1, 2, };
int recur(int i);

int main(void) {
    int n;
    scanf("%d", &n);
    printf((recur(n) % 2) ? "SK" : "CY");
    return 0;
}

int recur(int i) {
    if (i <= 2) return DP[i];
    for (int j = 3; j <= i; j++)
        DP[j] = MIN((DP[j - 1] + 1), (DP[j - 3] + 1));
    return DP[i];
}

// n의 홀짝성으로
// 홀수면 먼저 시작한 SK
// 짝수면 나중에 시작한 CY
// 1 = 1
// 2 = 1 + 1
// 3 = 3
// 4 = 3 + 1
// 5 = 3 + 1 + 1
// 6 = 3 + 3
// 7 = 3 + 3 + 1
// 8 = 3 + 3 + 1 + 1
// 9 = 3 + 3 + 3
