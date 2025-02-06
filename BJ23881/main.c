//
//  알고리즘 수업 - 선택 정렬 1
//  BJ23881
//
//  Created by 준우 on 8/8/24.
//

#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int j = n - 1; j >= 0; j--) {
        int max = *arr, m = 0;
        for (int i = 0; i < j; i++) {
            if (max < arr[i]) {
                max = arr[i];
                m = i;
            }
        }
        if (max > arr[j]) {
            arr[m] = arr[j];
            arr[j] = max;
            k--;
            if (!k) {
                printf("%d %d", arr[m], arr[j]);
                return 0;
            }
        }
        
    }
    printf("-1");
    return 0;
}
