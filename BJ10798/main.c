//
//  세로읽기
//  BJ10798
//
//  Created by 홍준우 on 6/27/24.
//

#include <stdio.h>

int main(void) {
    char ch[5][16] = {0, };
    for (int i = 0; i < 5; i++)
        scanf("%s", ch[i]);
    for (int j = 0; j < 15; j++) {
        for (int i = 0; i < 5; i++) {
            if (ch[i][j] != '\0')
                printf("%c", ch[i][j]);
        }
    }
    return 0;
}
