//
//  종이의 개수
//  BJ1780
//
//  Created by 준우 on 2/6/25.
//

#include <stdio.h>

int arr[2187][2187];
int cnt[3] = {0, };

int isSame(int i, int j, int len) {
    int tmp = arr[i][j];
    for (int x = 0; x < len * len; x++)
        if (arr[x / len + i][x % len + j] != tmp) return 0;
    return 1;
}

void recur(int i, int j, int len) {
    if (!isSame(i, j ,len)) {
        for (int x = 0; x < len; x += len / 3)
            for (int y = 0; y < len; y += len / 3)
                recur(x + i, y + j, len / 3);
    } else cnt[arr[i][j] + 1]++;
}

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n * n; i++)
        scanf("%d", &arr[i / n][i % n]);
    recur(0, 0, n);
    printf("%d\n%d\n%d", cnt[0], cnt[1], cnt[2]);
    return 0;
}
