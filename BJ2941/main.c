//
//  크로아티아 알파벳
//  BJ2941
//
//  Created by 준우 on 6/30/24.
//

#include <stdio.h>

int main(void) {
    char ch[101];
    int cnt = 0;
    scanf("%s", ch);
    for (int i = 0; ch[i] != '\0'; i++) cnt++;
    int len = cnt;
    for (int i = len; i > 0; i--) {
        if (ch[i] == '=') {
            if (ch[i - 1] == 'c' ||
                ch[i - 1] == 's') cnt--;
            else if (ch[i - 1] == 'z') {
                cnt--;
                if (i > 1 && ch[i - 2] == 'd') cnt--;
            }
        } else if (ch[i] == '-') {
            if (ch[i - 1] == 'c' ||
                ch[i - 1] == 'd') cnt--;
        } else if (ch[i] == 'j') {
            if (ch[i - 1] == 'l' ||
                ch[i - 1] == 'n') cnt--;
        }
    }
    printf("%d", cnt);
    return 0;
}
