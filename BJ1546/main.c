//
//  평균
//  BJ1546
//
//  Created by 준우 on 6/24/24.
//

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    double result;
    int max, tmp;
    scanf("%d", &tmp);
    result = max = tmp;
    for (int i = 1; i < n; i++) {
        scanf("%d", &tmp);
        result += tmp;
        if (tmp > max) max = tmp;
    }
    result *= (double) 100 / max / n;
    printf("%lf", result);
    return 0;
}
