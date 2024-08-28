//
//  주차의 신
//  BJ5054
//
//  Created by 홍준우 on 8/7/24.
//

#include <stdio.h>
#define max(n, m) n > m ? n : m
#define min(n, m) n < m ? n : m

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int max = 0, min = 99;
        while (n--) {
            int tmp;
            scanf("%d", &tmp);
            max = max(max, tmp);
            min = min(min, tmp);
        }
        printf("%d\n", (max - min) * 2);
    }
    return 0;
}
