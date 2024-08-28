//
//  코딩은 체육과목 입니다
//  BJ25314
//
//  Created by 홍준우 on 8/7/24.
//

#include <stdio.h>

int main(void) {
    int n, i;
    scanf("%d", &n);
    for (i = 0, n /= 4; i < n; i++) printf("long ");
    printf("int");
    return 0;
}
