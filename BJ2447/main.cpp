//
//  별 찍기 - 10
//  BJ2447
//
//  Created by 준우 on 2/24/25.
//

#include <iostream>
#include <vector>

using namespace std;

vector<string> v;

void recursive(int x, int y, int len) {
    for (int i = len / 3; i < len / 3 * 2; i++)
        for (int j = len / 3; j < len / 3 * 2; j++)
            v[y + i][x + j] = ' ';
    if (len != 1) {
        for (int i = 0; i < len; i += len / 3)
            for (int j = 0; j < len; j += len / 3)
                recursive(x + i, y + j, len / 3);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        for (int j = 0; j < n; j++) str += '*';
        v.push_back(str);
    }
    recursive(0, 0, n);
    for (int i = 0; i < n; i++) cout << v[i] << '\n';
    return 0;
}
