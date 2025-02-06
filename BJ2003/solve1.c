//
//  수들의 합 2
//  BJ2003
//
//  Created by 준우 on 7/12/24.
//

#include <stdio.h>

int main(void) {
    int n, m, cnt = 0;
    scanf("%d %d", &n, &m);
    int A[n];
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0, j = 0, sum = 0; i < n; sum -= A[i++]) {
        while (j < n && sum < m) sum += A[j++];
        if (sum == m) cnt++;
    }
    printf("%d", cnt);
    return 0;
}
