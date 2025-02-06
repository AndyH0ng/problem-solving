//
//  대소문자 바꾸기
//  BJ2744
//
//  Created by 준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    char ch[100];
    scanf("%s", ch);
    for (int i = 0; i < 100; i++) {
        if (65 <= ch[i] && ch[i] <= 90) ch[i] += 32;
        else if (97 <= ch[i] && ch[i] <= 122) ch[i] -= 32;
    }
    printf("%s\n", ch);
    return 0;
}
