//
//  나무 자르기
//  BJ2805
//
//  Created by 홍준우 on 8/16/24.
//

#include <stdio.h>
#define MAX(i, j) i > j ? i : j

int n, m, max = 0, *tree;
int binary(int LT, int RT);

int main(void) {
    scanf("%d %d", &n, &m);
    int arr[n];
    tree = arr;
    for (int i = 0; i < n; i++) {
        scanf("%d", &tree[i]);
        max = MAX(max, tree[i]);
    }
    printf("%d", binary(0, max));
    return 0;
}

long long getTree(int h, int *tree) {
    long long sum = 0;
    for (int i = 0; i < n; i++) sum += MAX(0, tree[i] - h);
    return sum;
}

// T T T ... T F F F
int binary(int LT, int RT) {
    while (LT < RT) {
        int MID = (LT + RT + 1) / 2;
        // -> F
        if (getTree(MID, tree) >= m) LT = MID;
        // -> T
        else RT = MID - 1;
    }
    return LT;
}
