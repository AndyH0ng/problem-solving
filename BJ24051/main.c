//
//  알고리즘 수업 - 삽입 정렬 1
//  BJ24051
//
//  Created by 준우 on 8/19/24.
//

#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    int A[n];
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int j = 1; j < n; j++) {
        int key = A[j], i = j - 1;
        while (key >= 0 && A[i] > key) {
            A[i + 1] = A[i];
            i--;
            if (!--k) {
                printf("%d", A[i + 1]);
                return 0;
            }
        }
        if (i + 1 != j) {
            A[i + 1] = key;
            if (!--k) {
                printf("%d", key);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}
