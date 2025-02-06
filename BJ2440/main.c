//
//  별 찍기 - 3
//  BJ2440
//
//  Created by 준우 on 6/21/24.
//

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        } printf("\n");
    }
    return 0;
}
