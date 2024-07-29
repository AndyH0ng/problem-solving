//
//  평균은 넘겠지
//  BJ4344
//
//  Created by 홍준우 on 7/24/24.
//

#include <stdio.h>

int main(void) {
    int c, n;
    scanf("%d", &c);
    while (c--) {
        scanf("%d", &n);
        int score[n];
        double avg = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &score[i]);
            avg += score[i];
        }
        avg /= n;
        int cnt = 0;
        for (int i = 0; i < n; i++)
            if (avg < score[i]) cnt++;
        printf("%.3f%%\n", (double)cnt / n * 100);
    }
    return 0;
}
