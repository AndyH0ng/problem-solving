//
//  소수 찾기
//  BJ1978
//
//  Created by 준우 on 6/24/24.
//

#include <stdio.h>

int main(void) {
    int n, input, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        for (int j = 2; j <= input; j++) {
            if (input == j) cnt++;
            if (!(input % j)) break;
        }
    }
    printf("%d", cnt);
    return 0;
}
