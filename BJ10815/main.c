//
//  숫자 카드
//  BJ10815
//
//  Created by 준우 on 2/24/25.
//

#include <stdio.h>
#define SIZE 20000001
#define OFFSET 10000000

int arr[SIZE] = {0, };

int main(void) {
    int n, m, i;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &i);
        arr[i + OFFSET]++;
    }
    scanf("%d", &m);
    while (m--) {
        scanf("%d", &i);
        printf("%d ", arr[i + OFFSET]);
    }
    return 0;
}
