//
//  재귀의 귀재
//  BJ25501
//
//  Created by 홍준우 on 7/5/24.
//

#include <stdio.h>
#include <string.h>

int cnt;

unsigned long recursion(const char *s, int l, unsigned long r) {
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else {
        cnt++;
        return recursion(s, l + 1, r - 1);
    }
}

unsigned long isPalindrome(const char *s) {
    cnt = 1;
    unsigned long n = recursion(s, 0, strlen(s) - 1);
    printf("%lu ", n);
    return n;
}

int main(void) {
    int t;
    char ch[1001];
    scanf("%d", &t);
    while (t--) {
        scanf("%s", ch);
        printf("%lu\n", isPalindrome(ch) ? strlen(ch) / 2 + 1 : cnt);
    }
    return 0;
}
