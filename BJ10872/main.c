//
//  팩토리얼
//  BJ10872
//
//  Created by 준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if (n < 2) printf("%d", 1);
    else if (n < 3) printf("%d", n);
    else {
        int m = 1;
        for (int i = 2; i <= n; i++) m *= i;
        printf("%d", m);
    }
    return 0;
}
