//
//  피보나치 함수
//  BJ1003
//
//  Created by 홍준우 on 7/13/24.
//

#include <iostream>

using namespace std;

void fibb(int n, int (*p)[2]) {
    if (n <= 1) {
        while (n >= 0) p[n][n--] = 1;
    } else {
        if ((p[n - 1][0] == 0 && p[n - 1][1] == 0) ||
            n == 1) fibb(n - 1, p);
        p[n][0] = p[n - 1][0] + p[n - 2][0];
        p[n][1] = p[n - 1][1] + p[n - 2][1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    int cnt[41][2] = {0, };
    cin >> t;
    while (t--) {
        cin >> n;
        fibb(n, cnt);
        cout << cnt[n][0] << ' ' << cnt[n][1] << '\n';
    }
    return 0;
}
