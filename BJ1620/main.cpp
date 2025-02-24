//
//  나는야 포켓몬 마스터 이다솜
//  BJ1620
//
//  Created by 준우 on 2/24/25.
//

#include <iostream>
#include <cctype>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    string tmp;
    cin >> n >> m;
    string d0[n + 1];
    map<string, int> d1;
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        d0[i] = tmp;
        d1.insert({tmp, i});
    }
    while (m--) {
        cin >> tmp;
        if (isdigit(tmp[0]))
            cout << d0[stoi(tmp)] << '\n';
        else
            cout << d1.find(tmp)->second << '\n';
    }
    return 0;
}
