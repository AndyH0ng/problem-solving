//
//  다이얼
//  BJ5622
//
//  Created by 준우 on 8/7/24.
//

#include <stdio.h>

int main(void) {
    char ch[16];
    scanf("%s", ch);
    int cnt = 0;
    for (int i = 0; ch[i] != '\0'; i++) {
        switch (ch[i]) {
            case 'A': case 'B': case 'C':
                cnt += 3;
                break;
            case 'D': case 'E': case 'F':
                cnt += 4;
                break;
            case 'G': case 'H': case 'I':
                cnt += 5;
                break;
            case 'J': case 'K': case 'L':
                cnt += 6;
                break;
            case 'M': case 'N': case 'O':
                cnt += 7;
                break;
            case 'P': case 'Q': case 'R': case 'S':
                cnt += 8;
                break;
            case 'T': case 'U': case 'V':
                cnt += 9;
                break;
            case 'W': case 'X': case 'Y': case 'Z':
                cnt += 10;
        }
    }
    printf("%d", cnt);
    return 0;
}
