//
//  수 정렬하기 2
//  BJ2751
//
//  Created by 준우 on 8/8/24.
//

#include <stdio.h>

void merge(int *lst, int L, int M, int R);
void mergeSort(int *lst, int L, int R);

int main(void) {
    int n;
    scanf("%d", &n);
    int lst[n];
    for (int i = 0; i < n; i++) scanf("%d", &lst[i]);
    mergeSort(lst, 0, n - 1);
    for (int i = 0; i < n; i++) printf("%d\n", lst[i]);
    return 0;
}

void merge(int *lst, int L, int M, int R) {
    int tmp[R - L + 1];
    int i = L, j = M + 1, k = 0;
    while (i <= M && j <= R) {
        if (lst[i] <= lst[j]) tmp[k++] = lst[i++];
        else tmp[k++] = lst[j++];
    }
    while (i <= M) tmp[k++] = lst[i++];
    while (j <= R) tmp[k++] = lst[j++];
    for (i = L, k = 0; i <= R; i++, k++) lst[i] = tmp[k];
}

void mergeSort(int *lst, int L, int R) {
    if (L < R) {
        int M = (L + R) / 2;
        mergeSort(lst, L, M);
        mergeSort(lst, M + 1, R);
        merge(lst, L, M, R);
    }
}
