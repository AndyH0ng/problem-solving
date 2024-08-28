//
//  단어 정렬
//  BJ1181
//
//  Created by 홍준우 on 8/4/24.
//

#include <stdio.h>

typedef struct str {
    char ch[51];
    int len;
} Str;

int main(void) {
    int n;
    scanf("%d", &n);
    Str word[n];
    for (int i = 0; i < n; i++) {
        int j = 0;
        scanf("%s", word[i].ch);
        while (word[i].ch[j] != '\0') j++;
        word[i].len = j;
    }
    for (int j = 1; j < n; j++) {
        Str key = word[j];
        int i = j - 1;
        while (i >= 0 && key.len < word[i].len) {
            word[i + 1] = word[i];
            i--;
        }
        int k = 0;
        while (i >= 0 && key.len == word[i].len && key.ch[k] <= word[i].ch[k]) {
            // j번째 문자 다르면
            if (key.ch[k] != word[i].ch[k]) {
                k = 0;
                word[i + 1] = word[i];
                i--;
            // 문자가 같으면
            } else if (k == word[i].len - 1) {
                k = 0;
                word[i].ch[0] = 123;
                break;
            // j번째 문자 같으면
            } else k++;
        }
        word[i + 1] = key;
    }
    for (int i = 0; i < n; i++) if (word[i].ch[0] != 123) printf("%s\n", word[i].ch);
    return 0;
}

