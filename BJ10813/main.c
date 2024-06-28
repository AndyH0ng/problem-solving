//
//  공 바꾸기
//  BJ10813
//
//  Created by 홍준우 on 6/21/24.
//

#include <stdio.h>

int main(void) {
    int n, m, i, j, tmp;
    scanf("%d %d", &n, &m);
    int arr[n + 1];
    for (int i = 1; i <= n; i++) arr[i] = i;
    for (int k = 0; k < m; k++) {
        scanf("%d %d", &i, &j);
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    for (int i = 1; i <= n; i++) printf("%d ", arr[i]);
    return 0;
}
