//
//  돌 게임 3
//  BJ9657
//
//  Created by 준우 on 2/18/25.
//

#include <iostream>
#define SK 1
#define CY 0

using namespace std;

int DP[1001] = {0, SK, CY, SK, SK};
int recur(int i);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cout << (recur(n) ? "SK" : "CY");
    return 0;
}

int recur(int i) {
    if (i <= 4) return DP[i];
    for (int j = 5; j <= i ; j++)
        DP[j] = (DP[j - 1] == CY || DP[j - 3] == CY || DP[j - 4] == CY) ? SK : CY;
    return DP[i];
}
