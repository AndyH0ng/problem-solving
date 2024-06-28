//
//  main.c
//  BJ11650
//
//  Created by 홍준우 on 6/26/24.
//

#include <stdio.h>

int main(void) {
    int n, k, key[2];
    scanf("%d", &n);
    int coord[n][2];
    for (int i = 0; i < n; i++)
        scanf("%d %d", &coord[i][0], &coord[i][1]);
    for (int j = 1; j < n; j++) {
        key[0] = coord[j][0];
        key[1] = coord[j][1];
        k = j - 1;
        while (k >= 0 &&
               (coord[k][0] > key[0] ||
                (coord[k][0] == key[0] && coord[k][1] > key[1]))) {
            coord[k + 1][0] = coord[k][0];
            coord[k + 1][1] = coord[k][1];
            k--;
        }
        coord[k + 1][0] = key[0];
        coord[k + 1][1] = key[1];
    }
    for (int i = 0; i < n; i++)
        printf("%d %d\n", coord[i][0], coord[i][1]);
    return 0;
}

