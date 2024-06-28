//
//  공 넣기
//  BJ10810
//
//  Created by 홍준우 on 6/21/24.
//

#include <stdio.h>

int main(void) {
    int n, m, i, j, k;
    scanf("%d %d", &n, &m);
    int arr[n + 1];
    for (int i = 1; i <= n; i++) arr[i] = 0;
    for (int t = 0; t < m; t++) {
        scanf("%d %d %d", &i, &j, &k);
        while (i <= j) arr[i++] = k;
    }
    for (int i = 1; i <= n; i++) printf("%d ", arr[i]);
    return 0;
}
