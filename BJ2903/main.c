//
//  중앙 이동 알고리즘
//  BJ2903
//
//  Created by 준우 on 8/29/24.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", (int)pow(pow(2, n) + 1, 2));
    return 0;
}
