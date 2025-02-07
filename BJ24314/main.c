//
//  알고리즘 수업 - 점근적 표기 2
//  BJ24314
//
//  Created by 준우 on 2/7/25.
//

#include <stdio.h>

int main(void) {
    int a[2], c, n;
    scanf("%d %d %d %d", &a[1], &a[0], &c, &n);
    printf("%d", a[1] >= c && (c - a[1]) * n <= a[0]);
    return 0;
}
