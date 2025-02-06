//
//  main.c
//  BJ2108
//
//  Created by 준우 on 6/24/24.
//

#include <stdio.h>
#include <math.h>

int average(int n, int *arr);
int median(int n, int *arr);
int mode(int n, int *arr);
int range(int n, int *arr);

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d\n%d\n%d\n%d",
           average(n, arr),
           median(n, arr),
           mode(n, arr),
           range(n, arr));
    return 0;
}

int average(int n, int *arr) {
    double total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    return (int) round(total / n);
}

int median(int n, int *arr) {
    for (int j = 1; j < n; j++) {
        int key = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
    return arr[(n - 1) / 2];
}

int mode(int n, int *arr) {
    int num[8001] = {0, };
    int tmp0 = 0, tmp1 = 0, tmp2;
    for (int i = 0; i < n; i++) {
        num[arr[i] + 4000]++;
    }
    for (int i = 8000; i >= 0; i--) {
        if (num[i] > tmp0) tmp0 = i;
        // TODO: 두 번째로 작은 최빈값
        else if (num[i] == num[tmp0] && tmp0 != 0) {
            tmp1 = i;
            if (tmp1 < tmp0) {
                tmp2 = tmp1;
                tmp1 = tmp0;
                tmp0 = tmp2;
            }
        }
    }
    if (tmp1 == 0) return tmp0 - 4000;
    else return tmp1 - 4000;
}

int range(int n, int *arr) {
    return arr[n - 1] - arr[0];
}
