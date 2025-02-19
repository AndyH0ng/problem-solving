//
//  랜선 자르기
//  BJ1651
//
//  Created by 준우 on 2/18/25.
//

#include <iostream>
#define ll long long

using namespace std;

int *len, n, k, max_input;

ll cutWire(ll j, int *len) {
    ll tmp = 0;
    for (int i = 0; i < k; i++) tmp += len[i] / j;
    return tmp;
}

ll binSearch(ll begin, ll end) {
    while (begin <= end) {
        ll mid = (begin + end) / 2;
        if (!mid) break;
        if (cutWire(mid, len) >= n) begin = mid + 1;
        else end = mid - 1;
    }
    return end;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k >> n;
    int arr[k];
    len = arr;
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
        if (max_input < arr[i]) max_input = arr[i];
    }
    cout << binSearch(0, max_input);
    return 0;
}
