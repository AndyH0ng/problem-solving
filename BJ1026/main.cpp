//
//  보물
//  BJ1026
//
//  Created by 준우 on 2/24/25.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a, a + n, greater<int>());
    sort(b, b + n, less<int>());
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i] * b[i];
    cout << sum;
    return 0;
}
