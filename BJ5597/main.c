//
//  과제 안 내신 분..?
//  BJ5597
//
//  Created by 준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int tmp;
    int std[31] = {0, };
    for (int i = 0; i < 28; i++) {
        scanf("%d", &tmp);
        std[tmp] = 1;
    }
    for (int i = 1; i < 31; i++)
        if (!std[i]) printf("%d ", i);
    return 0;
}
