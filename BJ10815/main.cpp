//
//  main.cpp
//  BJ10815
//
//  Created by 준우 on 9/2/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int binary(int LT, int RT, int NUM);
int cmp(int a, int b);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, tmp;
    cin >> n;
    int card[n];
    for (int i = 0; i < n; i++) cin >> card[i];
    sort(card, card + n, cmp);
    cin >> m;
    while (m--) {
        cin >> tmp;
        if (tmp == binary(card[0], card[n - 1], tmp)) {
            cout << 1;
        } else cout << 0;
    }
    return 0;
}

int binary(int LT, int RT, int NUM) {
    while (LT < RT) {
        int MID = (LT + RT + 1) / 2;
        if (MID < NUM) LT = MID;
        else RT = MID - 1;
    }
    return LT;
}

int cmp(int a, int b) {
    return a < b;
}
