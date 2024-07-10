//
//  소수 구하기
//  BJ1929
//
//  Created by 홍준우 on 7/5/24.
//

#include <stdio.h>
#define mil 1000000

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[mil + 1] = {0, };
    arr[1] = 1;
    for (int i = 2; i <= mil; i++) {
        if (arr[i]) continue;
        for (int j = i * 2; j <= n; j += i) {
            arr[j] = 1;
        }
    }
    for (int i = m; i <= n; i++)
        if (arr[i] == 0)
            printf("%d\n", i);
    return 0;
}
