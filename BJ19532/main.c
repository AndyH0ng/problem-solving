//
//  수학은 비대면강의입니다
//  BJ19532
//
//  Created by 홍준우 on 8/7/24.
//

#include <stdio.h>

int main(void) {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d",
          &a, &b, &c, &d, &e, &f);
    printf("%d %d",
           (c * e - b * f) / (a * e - b * d),
           (a * f - c * d) / (a * e - b * d));
    return 0;
}
