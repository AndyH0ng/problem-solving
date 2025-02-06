//
//  알파벳 찾기
//  BJ10809
//
//  Created by 준우 on 6/29/24.
//

#include <stdio.h>

int main(void) {
    int cnt[26];
    for (int i = 0; i < 26; i++) cnt[i] = -1;
    char ch[101];
    scanf("%s", ch);
    for (int i = 0; ch[i] != '\0'; i++) {
        for (int j = 'a'; j <= 'z'; j++) {
            if (ch[i] == j && cnt[j - 'a'] == -1)
                cnt[j - 'a'] = i;
        }
    }
    for (int i = 0; i < 26; i++)
        printf("%d ", cnt[i]);
    return 0;
}
