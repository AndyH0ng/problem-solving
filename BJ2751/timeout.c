//
//  수 정렬하기 2 (시간 초과)
//  BJ2751
//
//  Created by 홍준우 on 7/5/24.
//

#include <stdio.h>

int main(void) {
    int n;
    int arr[1000001] = {0, };
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int k;
        scanf("%d", &k);
        arr[k] = 1;
    }
    for (int i = 1; i <= 1000000; i++)
        if (arr[i] == 1) printf("%d\n", i);
    return 0;
}
