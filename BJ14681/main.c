//
//  사분면 고르기
//  BJ14681
//
//  Created by 준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int x, y, r;
    scanf("%d %d", &x, &y);
    if (x > 0) {
        if (y > 0) r = 1;
        else r = 4;
    } else {
        if (y > 0) r = 2;
        else r = 3;
    }
    printf("%d", r);
    return 0;
}
