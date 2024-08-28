//
//  수 정렬하기 2
//  BJ2751
//
//  Created by 홍준우 on 8/8/24.
//

#include <stdio.h>

void merge(int *lst, int LT, int MID, int RT);
void mergeSort(int *lst, int LT, int RT);

int main(void) {
    int n;
    scanf("%d", &n);
    int lst[n];
    for (int i = 0; i < n; i++) scanf("%d", &lst[i]);
    mergeSort(lst, 0, n - 1);
    for (int i = 0; i < n; i++) printf("%d\n", lst[i]);
    return 0;
}

void merge(int *lst, int LT, int MID, int RT) {
    int tmp[RT - LT + 1];
    int i = LT, j = MID + 1, k = 0;
    while (i <= MID && j <= RT) {
        if (lst[i] <= lst[j]) tmp[k++] = lst[i++];
        else tmp[k++] = lst[j++];
    }
    while (i <= MID) tmp[k++] = lst[i++];
    while (j <= RT) tmp[k++] = lst[j++];
    for (i = LT, k = 0; i <= RT; i++, k++) lst[i] = tmp[k];
}

void mergeSort(int *lst, int LT, int RT) {
    if (LT < RT) {
        int MID = (LT + RT) / 2;
        mergeSort(lst, LT, MID);
        mergeSort(lst, MID + 1, RT);
        merge(lst, LT, MID, RT);
    }
}
