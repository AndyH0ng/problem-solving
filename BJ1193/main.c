//
//  분수찾기
//  BJ1193
//
//  Created by 준우 on 9/2/24.
//

#include <stdio.h>

int main(void) {
    int n, i = 1;
    scanf("%d", &n);
    while (i * (i + 1) / 2 < n) i++;
    int tmp = n - i * (i - 1) / 2 - 1;
    if (i % 2) printf("%d/%d", i - tmp, 1 + tmp);
    else printf("%d/%d", 1 + tmp, i - tmp);
    return 0;
}
