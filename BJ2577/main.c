//
//  숫자의 개수
//  BJ2577
//
//  Created by 준우 on 6/20/24.
//

#include <stdio.h>

int main(void) {
    int tmp, sum = 1;
    int arr[10] = {0, };
    for (int i = 0; i < 3; i++) {
        scanf("%d", &tmp);
        sum *= tmp;
    }
    for (int i = sum; i > 0; i /= 10)
        arr[i % 10]++;
    for (int i = 0; i < 10; i++)
        printf("%d\n", arr[i]);
    return 0;
}
