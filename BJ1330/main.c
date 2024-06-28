//
//  두 수 비교하기
//  BJ1330
//
//  Created by 홍준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) printf(">");
    else if (a < b) printf("<");
    else printf("==");
    return 0;
}
