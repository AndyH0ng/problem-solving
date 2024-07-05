//
//  큐
//  BJ10845
//
//  Created by 홍준우 on 7/2/24.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    int n, i = 0;
    char ch[6];
    int queue[10000];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", ch);
        if (strcmp(ch, "push") == 0) {
            int x;
            scanf("%d", &x);
            queue[i++] = x;
        } else if (strcmp(ch, "pop") == 0) {
            if (i == 0) {
                printf("%d\n", -1);
            } else {
                printf("%d\n", queue[0]);
                int j = 0;
                while (j < i) {
                    queue[j] = queue[j + 1];
                    j++;
                }
                i--;
            }
        } else if (strcmp(ch, "size") == 0) {
            printf("%d\n", i);
        } else if (strcmp(ch, "empty") == 0) {
            printf("%d\n", i ? 0 : 1);
        } else if (strcmp(ch, "front") == 0) {
            printf("%d\n", i ? queue[0] : -1);
        } else if (strcmp(ch, "back") == 0) {
            printf("%d\n", i ? queue[i - 1] : -1);
        }
    }
    return 0;
}
