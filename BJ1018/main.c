//
//  main.c
//  BJ1018
//
//  Created by 홍준우 on 6/27/24.
//

#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    char ch[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%c", &ch[i][j]);
        }
    }
    for (int i = 0; i < n - 7; i++) {
        for (int j = 0; j < m - 7; j++) {
        }
    }
    return 0;
}
