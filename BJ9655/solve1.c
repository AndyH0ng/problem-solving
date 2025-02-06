//
//  돌 게임
//  BJ9655
//
//  Created by 준우 on 10/29/24.
//

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    printf(n % 2 ? "SK" : "CY");
    return 0;
}

// 1 2 3 4 5 6 7
// 1 2 0 1 2 0 1
// S C S C S C S
