//
//  킹, 퀸, 룩, 비숍, 나이트, 폰
//  BJ3003
//
//  Created by 홍준우 on 8/7/24.
//

#include <stdio.h>
#define SIZE 6
#define I 1
#define II 2
#define VIII 8

int main(void) {
    short tmp[SIZE];
    scanf("%hd %hd %hd %hd %hd %hd",
          &tmp[0], &tmp[1], &tmp[2], &tmp[3], &tmp[4], &tmp[5]);
    printf("%hd %hd %hd %hd %hd %hd",
           I - tmp[0], I - tmp[1], II - tmp[2], II - tmp[3], II - tmp[4], VIII - tmp[5]);
    return 0;
}
