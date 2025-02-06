//
//  색종이
//  BJ2563
//
//  Created by 준우 on 7/2/24.
//

#include <stdio.h>

int main(void) {
    int n, cnt = 0;
    int area[100][100] = {0, };
    scanf("%d", &n);
    while (n--) {
        int x, y;
        scanf("%d %d", &x, &y);
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                area[y + i][x + j] = 1;
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            cnt += area[i][j];
        }
    }
    printf("%d", cnt);
    return 0;
}
