//
//  알고리즘 수업 - 알고리즘의 수행 시간 6
//  BJ24267
//
//  Created by 준우 on 7/10/24.
//

#include <stdio.h>

int main(void) {
    long long i;
    scanf("%lld", &i);
    printf("%lld\n3", i * (i - 1) * (i - 2) / 6);
    return 0;
}
