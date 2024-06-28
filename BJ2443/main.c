//
//  별 찍기 - 6
//  BJ2443
//
//  Created by 홍준우 on 6/21/24.
//

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = n - i; j > 0; j--)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
