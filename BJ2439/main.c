//
//  별 찍기 - 2
//  BJ2439
//
//  Created by 홍준우 on 6/20/24.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    int n, i = 1;
    char ch[101] = "*";
    scanf("%d", &n);
    while (i <= n) {
        printf("%s\n", ch);
        strcat(ch, "*");
        i++;
    }
    return 0;
}
