//
//  블랙잭
//  BJ2798
//
//  Created by 홍준우 on 6/29/24.
//

#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n], tmp = 2;
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] <= m &&
                    arr[i] + arr[j] + arr[k] > tmp)
                    tmp = arr[i] + arr[j] + arr[k];
            }
        }
    }
    printf("%d", tmp);
    return 0;
}
