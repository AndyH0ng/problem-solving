//
//  터렛
//  BJ1002
//
//  Created by 홍준우 on 6/29/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int t;
    int x1, y1, r1, x2, y2, r2;
    scanf("%d", &t);
    int result[t];
    double dist;
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        dist = sqrt((int) pow((x1 - x2), 2) + (int) pow((y1 - y2), 2));
        // 원의 중심이 겹침
        if (dist == 0) {
            // 반지름의 크기가 같음
            if (r1 == r2) result[i] = -1;
            // 반지름의 크기가 다름
            else result[i] = 0;
        // 원의 중심이 겹치지 않음
        } else {
            // 원이 외접함 || 원이 내접함
            if (r1 + r2 == dist || abs(r1 - r2) == dist) result[i] = 1;
            // 원의 중심이 각각의 원 밖에 존재함 || 원의 중심이 각각의 원 안에 존재함
            else if (r1 + r2 < dist || abs(r1 - r2) > dist) result[i] = 0;
            else result[i] = 2;
        }
    }
    for (int i = 0; i < t; i++)
        printf("%d\n", result[i]);
    return 0;
}
