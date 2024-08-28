//
//  수 찾기
//  BJ1920
//
//  Created by 홍준우 on 7/18/24.
//

#include <stdio.h>
#include <stdlib.h>

int binSearch(int *A, int key, int end) {
    int start = 0;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (key == A[mid]) return 1;
        else if (key < A[mid]) end = mid - 1;
        else start = mid + 1;
    }
    return 0;
}

int cmp(const void *p, const void *q) {
    return *(int *)p > *(int *)q ? 1 : (*(int *)p < *(int *)q ? -1 : 0);
}

int main(void) {
    int n, m, find;
    scanf("%d", &n);
    int *A = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    qsort(A, n, sizeof(int), cmp);
    scanf("%d", &m);
    while (m--) {
        scanf("%d", &find);
        printf("%d\n", binSearch(A, find, n - 1));
    }
    return 0;
}
