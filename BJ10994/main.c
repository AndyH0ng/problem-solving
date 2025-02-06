//
//  별 찍기 - 19
//  BJ10994
//
//  Created by 준우 on 7/30/24.
//

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int SIZE = 4 * n - 3;
    char sqr[SIZE][SIZE];
    for (int i = 0; i < SIZE * SIZE; i++) *((*sqr) + i) = ' ';
    int bnd[2] = {0, SIZE - 1};
    while (*bnd <= *(bnd + 1)) {
        for (int i = *bnd; i <= *(bnd + 1); i++) {
            sqr[*bnd][i] = '*';
            sqr[i][*bnd] = '*';
            sqr[*(bnd + 1)][i] = '*';
            sqr[i][*(bnd + 1)] = '*';
        }
        *bnd += 2;
        *(bnd + 1) -= 2;
    }
    for (int i = 0; i < SIZE * SIZE; i++)
        printf((i % (SIZE) != SIZE - 1) ? "%c" : "%c\n", *((*sqr) + i));
    return 0;
}
