//
//  이항 계수 1
//  BJ11050
//
//  Created by 홍준우 on 7/29/24.
//

#include <stdio.h>

int factorial(int n, int m);

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", factorial(n, k) / factorial(n - k, 0));
    return 0;
}

int factorial (int n, int m) {
    int tmp = 1;
    while (n != m) tmp *= n--;
    return tmp;
}

