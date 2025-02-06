//
//  행렬 덧셈
//  BJ2738
//
//  Created by 준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int n, m, tmp;
    scanf("%d %d", &n, &m);
    int A[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            scanf("%d", &A[i][j]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &tmp);
            A[i][j] += tmp;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    return 0;
}
