//
//  일곱 난쟁이
//  BJ2309
//
//  Created by 홍준우 on 8/4/24.
//

#include <stdio.h>
#define SIZE 9

int main(void) {
    int mgt[SIZE], sum = -100;
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &mgt[i]);
        sum += mgt[i];
    }
    for (int j = 1; j < SIZE; j++) {
        int key = mgt[j];
        int i = j - 1;
        while (i >= 0 && mgt[i] > key) {
            mgt[i + 1] = mgt[i];
            i--;
        }
        mgt[i + 1] = key;
    }
    _Bool stat = 1;
    for (int j = 0; mgt[j] <= sum / 2 && stat; j++) {
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
