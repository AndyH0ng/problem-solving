//
//  1로 만들기
//  BJ1463
//
//  Created by 준우 on 2/8/25.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> dp;

int recur(int i) {
    if (dp[i] != -1) return dp[i];
    int tmp = recur(i - 1) + 1;
    if (i % 3 == 0) tmp = min(tmp, recur(i / 3) + 1);
    if (i % 2 == 0) tmp = min(tmp, recur(i / 2) + 1);
    dp[i] = tmp;
    return tmp;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    dp.resize(n + 1, -1);
    dp[1] = 0;
    cout << recur(n);
    return 0;
}
