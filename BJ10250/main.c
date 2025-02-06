//
//  ACM 호텔
//  BJ10250
//
//  Created by 준우 on 6/21/24.
//

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int h, w, n, floor, room;
        scanf("%d %d %d", &h, &w, &n);
        if (n % h) {
            floor = n % h;
            room = n / h + 1;
        } else {
            floor = h;
            room = n / h;
        }
        if (room < 10) printf("%d0%d\n", floor, room);
        else printf("%d%d\n", floor, room);
    }
    return 0;
}
