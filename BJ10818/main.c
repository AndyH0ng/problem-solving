//
//  최소, 최대
//  BJ10818
//
//  Created by 홍준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int n, tmp;
    int Max, min;
    scanf("%d %d", &n, &tmp);
    Max = min = tmp;
    while (--n != 0) {
        scanf("%d", &tmp);
        if (tmp < min) min = tmp;
        else if (tmp > Max) Max = tmp;
    }
    printf("%d %d", min, Max);
    return 0;
}
