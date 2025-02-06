//
//  색종이 만들기
//  BJ2630
//
//  Created by 준우 on 9/26/24.
//

#include <stdio.h>

int cnt = 0, _cnt = 0, paper[128][128];
void recursion(int x, int y, int k);

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &paper[i][j]);
        }
    }
    recursion(0, 0, n);
    printf("%d\n%d", cnt, _cnt);
    return 0;
}

void recursion(int x, int y, int k) {
    if (k >= 0) {
        int i, j, tmp = paper[x][y];
        for (i = x; i < x + k; i++) {
            for (j = y; j < y + k; j++) {
                if (paper[i][j] != tmp) {
                    k /= 2;
                    recursion(x, y, k);
                    recursion(x + k, y, k);
                    recursion(x, y + k, k);
                    recursion(x + k, y + k, k);
                    return;
                }
            }
        }
        !paper[x][y] ? cnt++ : _cnt++;
    }
}
