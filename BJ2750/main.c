//
//  수 정렬하기
//  BJ2750
//
//  Created by 홍준우 on 6/27/24.
//

#include <stdio.h>

int main(void) {
    int n, k, key;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j = 1; j < n; j++) {
        key = arr[j];
        for (k = j - 1; k >= 0 && arr[k] > key; k--) {
            arr[k + 1] = arr[k];
        }
        arr[k + 1] = key;
    }
    for (int i = 0; i < n; i++) printf("%d\n", arr[i]);
    return 0;
}
