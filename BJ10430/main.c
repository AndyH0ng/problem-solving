//
//  나머지
//  BJ10430
//
//  Created by 홍준우 on 8/7/24.
//

#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int tmp[] = {(a + b) % c, (a * b) % c};
    printf("%d\n%d\n%d\n%d",
           *tmp, *tmp,
           *(tmp + 1), *(tmp + 1));
    return 0;
}
