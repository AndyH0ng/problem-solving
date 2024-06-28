//
//  문자와 문자열
//  BJ27866
//
//  Created by 홍준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    char S[1001];
    int i;
    scanf("%s %d", S, &i);
    printf("%c", S[i - 1]);
    return 0;
}
