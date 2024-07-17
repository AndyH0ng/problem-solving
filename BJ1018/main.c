//
//  체스판 다시 칠하기
//  BJ1018
//
//  Created by 홍준우 on 7/15/24.
//

#include <stdio.h>
#define min(a, b) a < b ? a : b

int main(void) {
    int n, m, min = 32;
    char ch[50][51];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%s", ch[i]);
    for (int i = 0; i < n - 7; i++) {
        for (int j = 0; j < m - 7; j++) {
            // ch[j][i] 포인터
            int cnt = 0;
            for (int y = i; y < i + 8; y++) {
                for (int x = j; x < j + 8; x++) {
                    // (0, 0) (2, 0) (0, 2) ...
                    if ((x + y) % 2 == 0) {
                        if (ch[y][x] == 'B') cnt++;
                    } else {
                        if (ch[y][x] == 'W') cnt++;
                    }
                }
            }
            cnt = min(cnt, 64 - cnt);
            min = min(min, cnt);
        }
    }
    printf("%d", min);
    return 0;
}
