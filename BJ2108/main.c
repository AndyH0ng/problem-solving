//
//  통계학
//  BJ2108
//
//  Created by 준우 on 2/19/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int average(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return round((double)sum / n);
}

int median(int *arr, int n) { return arr[n / 2]; }

int mode(int *arr, int n) {
    int cnt[8001] = {0, };
    int max = 0, mode = 0;
    for (int i = 0; i < n; i++) cnt[arr[i] + 4000]++;
    for (int i = 0; i < 8001; i++) {
        if (cnt[i] > max) {
            max = cnt[i];
            mode = i - 4000;
        }
    }
    for (int i = mode + 4001; i < 8001; i++) {
        if (cnt[i] == max) return i - 4000;
    }
    return mode;
}
    
int range(int *arr, int n) { return arr[n - 1] - arr[0]; }

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmp);
    printf("%d\n%d\n%d\n%d",
           average(arr, n),
           median(arr, n),
           mode(arr, n),
           range(arr, n));
    return 0;
}
