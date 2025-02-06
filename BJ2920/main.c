//
//  음계
//  BJ2920
//
//  Created by 준우 on 6/29/24.
//

#include <stdio.h>
#define SIZE 8

int main(void) {
    int ipt[SIZE], diff = 0, i;
    scanf("%d", &ipt[0]);
    for (i = 1; i < SIZE; i++) {
        scanf("%d", &ipt[i]);
        diff = ipt[i] - ipt[i - 1];
        if ((diff != 1 && diff != -1) && i != 0) {
            printf("mixed");
            return 0;
        }
    }
    if (diff == 1) printf("ascending");
    else printf("descending");
    return 0;
}
