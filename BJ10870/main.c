//
//  피보나치 수 5
//  BJ10870
//
//  Created by 홍준우 on 7/5/24.
//

#include <stdio.h>

int fibb(int i) {
    if (i < 2) return i;
    else return fibb(i - 1) + fibb(i - 2);
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", fibb(n));
    return 0;
}
