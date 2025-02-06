//
//  영수증
//  BJ25304
//
//  Created by 준우 on 6/21/24.
//

#include <iostream>

using namespace std;

int main() {
    int x, n, a, b, total = 0;
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        total += a * b;
    }
    if (total == x)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
