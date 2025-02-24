//
//  문자열 집합
//  BJ14425
//
//  Created by 준우 on 2/24/25.
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, cnt = 0;
    set<string> s;
    string tmp;
    cin >> n >> m;
    while (n--) {
        cin >> tmp;
        s.insert(tmp);
    }
    while (m--) {
        cin >> tmp;
        if (s.find(tmp) != s.end()) cnt++;
    }
    cout << cnt;
    return 0;
}
