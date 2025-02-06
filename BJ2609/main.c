//
//  최대공약수와 최소공배수
//  BJ2609
//
//  Created by 준우 on 7/29/24.
//

#include <stdio.h>
#define MAX(n, m) n > m ? n : m
#define min(n, m) n > m ? m : n

int gcd(int i, int j);

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int g = gcd(n, m);
    printf("%d\n%d", g, n * m / g);
    return 0;
}

int gcd(int i, int j) {
    int MAX = MAX(i, j);
    int min = min(i, j);
    if (MAX % min) return gcd(MAX % min, min);
    else return min;
}
