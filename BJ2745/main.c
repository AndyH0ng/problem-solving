//
//  진법 변환
//  BJ2745
//
//  Created by 홍준우 on 7/10/24.
//

#include <stdio.h>
#include <string.h>
#include <math.h>

int alphabet(char ch) {
    if (47 < ch && ch < 58) return ch - 48;
    else return ch - 55;
}

int main(void) {
    int b;
    long long sum = 0;
    char n[1000000];
    scanf("%s %d", n, &b);
    for (int i = 0; n[i] != '\0'; i++)
        sum += alphabet(n[i]) * pow(b, strlen(n) - 1 - i);
    printf("%lld", sum);
    return 0;
}
