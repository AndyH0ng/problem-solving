//
//  최댓값
//  BJ2562
//
//  Created by 준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int tmp = 0, result, i;
    int index = i = 1;
    scanf("%d", &result);
    while (i <= 8) {
        i++;
        scanf("%d", &tmp);
        if (tmp > result) {
            result = tmp;
            index = i;
        }
    }
    printf("%d\n%d", result, index);
    return 0;
}
