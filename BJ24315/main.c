//
//  알고리즘 수업 - 점근적 표기 3
//  BJ24315
//
//  Created by 준우 on 2/7/25.
//

#include <stdio.h>

int main(void) {
    int a[2], c[2], n;
    scanf("%d %d %d %d %d", &a[1], &a[0], &c[0], &c[1], &n);
    printf("%d", c[0] <= a[1] && a[1] <= c[1] &&
           (c[0] - a[1]) * n <= a[0] &&
           (c[1] - a[1]) * n >= a[0]);
    return 0;
}
