//
//  최댓값
//  BJ2566
//
//  Created by 준우 on 7/2/24.
//

#include <stdio.h>

int main(void) {
    int tmp, max = 0, col = 1, row = 1;
    for (int i = 1; i <= 81; i++) {
        scanf("%d", &tmp);
        if (tmp > max) {
            max = tmp;
            col = i % 9 ? i / 9 + 1 : i / 9;
            row = i % 9 ? i % 9 : 9;
        }
    }
    printf("%d\n%d %d", max, col, row);
    return 0;
}
