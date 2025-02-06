//
//  문자열
//  BJ9086
//
//  Created by 준우 on 6/19/24.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    char ch[1001];
    scanf("%d", &t);
    while (t--) {
        scanf("%s", ch);
        printf("%c%c\n", ch[0], ch[strlen(ch) - 1]);
    }
    return 0;
}

// string.h 헤더에 포함되어 있는 strlen() 메소드는 문자열의 길이를 반환한다.
