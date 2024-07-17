//
//  ATM
//  BJ11399
//
//  Created by 홍준우 on 7/13/24.
//

#include <stdio.h>

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);
    int P[n];
    for (int i = 1; i <= n; i++) scanf("%d", &P[i]);
    for (int j = 2; j <= n; j++) {
        int i = j - 1, key = P[j];
        for (; i >= 1 && P[i] > key; i--) P[i + 1] = P[i];
        P[i + 1] = key;
    }
    for (int i = 1; i <= n; i++) sum += P[i] * (n - i + 1);
    printf("%d", sum);
    return 0;
}
