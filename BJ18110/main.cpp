//
//  solved.ac
//  BJ18110
//
//  Created by 준우 on 2/20/25.
//

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int cmp(int a, int b) { return a < b; }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    double result = 0;
    cin >> n;
    if (!n) {
        cout << 0;
        return 0;
    }
    int tmp[n];
    for (int i = 0; i < n; i++) cin >> tmp[i];
    sort(tmp, tmp + n, cmp);
    int j = round(n * 0.15);
    for (int i = j; i < n - j; i++) result += tmp[i];
    cout << round(result / (n - 2 * j));
    return 0;
}
