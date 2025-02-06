//
//  좌표 정렬하기 2 (시간 초과)
//  BJ11651
//
//  Created by 준우 on 7/5/24.
//

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n][2], key[2];
    for (int i = 0; i < n; i++)
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    for (int j = 1; j < n; j++) {
        key[0] = arr[j][0];
        key[1] = arr[j][1];
        int i = j - 1;
        while (i >= 0 && arr[i][1] >= key[1]) {
            if (arr[i][1] == key[1] && arr[i][0] <= key[0]) break;
            arr[i + 1][0] = arr[i][0];
            arr[i + 1][1] = arr[i][1];
            i--;
        }
        arr[i + 1][0] = key[0];
        arr[i + 1][1] = key[1];
    }
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", arr[i][0], arr[i][1]);
    }
    return 0;
}
