//
//  main.c
//  BJ
//
//  Created by 홍준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int i;
    int arr[5] = {4, 1, 5, 3, 2};
    int tmp;
    for (int j = 1; j < 5; j++) {
        tmp = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > tmp) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = tmp;
    }
    
    
    for (int i = 0; i < 5; i++) printf("%d", arr[i]);
    return 0;
}
