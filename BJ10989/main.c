//
//  수 정렬하기 3
//  BJ10989
//
//  Created by 준우 on 6/26/24.
//

#include <stdio.h>

int main(void) {
    int n, tmp;
    scanf("%d", &n);
    int cnt[10001] = {0, };
    for (int i = 0; i < n; i++) {
        scanf("%d", &tmp);
        cnt[tmp]++;
    }
    for (int i = 1; i < 10001; i++) {
        for (int j = 0; j < cnt[i]; j++) {
            printf("%d\n", i);
        }
    }
    return 0;
}
