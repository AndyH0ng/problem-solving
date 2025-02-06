//
//  백설 공주와 일곱 난쟁이
//  BJ3040
//
//  Created by 준우 on 8/8/24.
//

#include <stdio.h>
#define SIZE 9

int main(void) {
    int mgt[SIZE], sum = -100;
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &mgt[i]);
        sum += mgt[i];
    }
    _Bool stat = 1;
    for (int j = 0; j < 8 && stat; j++) {
        for (int i = j + 1; i < SIZE && stat; i++) {
            if (!(sum - mgt[j] - mgt[i])) {
                mgt[j] = mgt[i] = 0;
                stat = 0;
            }
        }
    }
    for (int i = 0; i < SIZE; i++)
        if (mgt[i]) printf("%d\n", mgt[i]);
    return 0;
}
