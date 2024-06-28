//
//  시험 성적
//  BJ9498
//
//  Created by 홍준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int n; char ch;
    scanf("%d", &n);
    if (n >= 90) ch = 'A';
    else if (n >= 80) ch = 'B';
    else if (n >= 70) ch = 'C';
    else if (n >= 60) ch = 'D';
    else ch = 'F';
    printf("%c\n", ch);
    return 0;
}
