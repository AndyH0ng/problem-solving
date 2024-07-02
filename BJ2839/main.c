//
//  설탕 배달
//  BJ2839
//
//  Created by 홍준우 on 7/2/24.
//

#include <stdio.h>

int main(void) {
    int n, opt;
    scanf("%d", &n);
    if (n % 5 == 0)
        opt = n / 5;
    else if (n % 5 == 3)
        opt = (n - 3) / 5 + 1;
    else if (n % 5 == 1 && n >= 6)
        opt = (n - 6) / 5 + 2;
    else if (n % 5 == 4 && n >= 9)
        opt = (n - 9) / 5 + 3;
    else if (n % 5 == 2 && n >= 12)
        opt = (n - 12) / 5 + 4;
    else
        opt = -1;
    printf("%d", opt);
    return 0;
}
