//
//  부녀회장이 될테야
//  BJ2775
//
//  Created by 홍준우 on 6/24/24.
//

#include <stdio.h>

int add(int floor, int room);

int main(void) {
    int t, k, n;
    scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        scanf("%d %d", &k, &n);
        printf("%d\n", add(k, n));
    }
}

int add(int floor, int room) {
    int ppl = 0;
//    printf("Floor= %d, Room= %d\n", floor, room);
    if (floor == 0) return room;
    else if (room == 1) return 1;
    else {
        for (int i = room; i > 0; i--) {
            ppl += add(floor - 1, i);
        }
    }
    return ppl;
}
