//
//  바구니 뒤집기
//  BJ10811
//
//  Created by 준우 on 6/21/24.
//

#include <stdio.h>

int main(void) {
    int n, m, i, j, tmp;
    scanf("%d %d", &n, &m);
    int arr[n + 1];
    for (int i = 1; i <= n; i++) arr[i] = i;
    for (int k = 0; k < m; k++) {
        scanf("%d %d", &i, &j);
        while (i <= j) {
            tmp = arr[i];
            arr[i++] = arr[j];
            arr[j--] = tmp;
        }
    }
    for (int i = 1; i <= n; i++) printf("%d ", arr[i]);
    return 0;
}
