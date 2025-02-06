//
//  더하기 사이클
//  BJ1110
//
//  Created by 준우 on 6/21/24.
//

#include <stdio.h>

int main(void) {
    int n, m, tmp, cnt = 0;
    scanf("%d", &n);
    m = n;
    while (n != m || cnt == 0) {
        tmp = n / 10 + n % 10;
        n = n % 10 * 10 + tmp % 10;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}
