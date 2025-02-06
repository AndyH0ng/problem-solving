//
//  Z
//  BJ1074
//
//  Created by 준우 on 2/6/25.
//

#include <stdio.h>
#include <math.h>

int n, r, c;
int cnt;

void recur(int i, int j, int len) {
    if (i == c && j == r) {
        printf("%d", cnt); return;
    } else if (i <= c && c < i + len &&
               j <= r && r < j + len) {
        // 사분면에 존재
        recur(i, j, len / 2);
        recur(i + len / 2, j, len / 2);
        recur(i, j + len / 2, len / 2);
        recur(i + len / 2, j + len / 2, len / 2);
    } else cnt += len * len;
}

int main(void) {
    scanf("%d %d %d", &n, &r, &c);
    recur(0, 0, pow(2, n));
    printf("%d", cnt);
    return 0;
}
