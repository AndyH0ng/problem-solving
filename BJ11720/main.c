//
//  숫자의 합
//  BJ11720
//
//  Created by 홍준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int n;
    char ch[101];
    scanf("%d", &n);
    scanf("%s", ch);
    int sum = 0, i = 0;
    while (ch[i] != '\0') {
        sum += (ch[i] - 48);
        i++;
    }
    printf("%d", sum);
    return 0;
}
