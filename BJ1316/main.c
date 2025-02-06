//
//  그룹 단어 체커
//  BJ1316
//
//  Created by 준우 on 7/14/24.
//

#include <stdio.h>
#include <string.h>
#define idx(ch) ch - 97

int main(void) {
    int n, cnt = 0;
    char ch[101];
    scanf("%d", &n);
    while (n--) {
        int i, stat = 1, alp[26] = {0, };
        scanf("%s", ch);
        for (i = 0, alp[idx(ch[0])] = 1; i < strlen(ch) - 1; i++) {
            if (++alp[idx(ch[i + 1])] != 1 && ch[i] != ch[i + 1]) {
                stat = 0;
                break;
            }
        }
        if (stat) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
