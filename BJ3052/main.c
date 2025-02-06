//
//  나머지
//  BJ3052
//
//  Created by 준우 on 6/21/24.
//

#include <stdio.h>

int main(void) {
    int tmp, cnt = 0, arr[42] = {0, };
    for (int i = 0; i < 10; i++) {
        scanf("%d", &tmp);
        arr[tmp % 42]++;
    }
    for (int i = 0; i < 42; i++) {
        if (arr[i]) cnt++;
    }
    printf("%d", cnt);
    return 0;
}
