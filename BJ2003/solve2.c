//
//  수들의 합 2
//  BJ2003
//
//  Created by 홍준우 on 7/12/24.
//

#include <stdio.h>

int main(void) {
    int n, m, cnt = 0;
    scanf("%d %d", &n, &m);
    int A[n];
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0; i < n; i++) {
        int sum = A[i];
        for (int j = i; j < n && sum <= m; sum += A[++j]) {
            if (sum == m) cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
