//
//  덱
//  BJ10866
//
//  Created by 준우 on 2/24/25.
//

#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, tmp;
    deque<int> d;
    cin >> n;
    while (n--) {
        string ord;
        cin >> ord;
        if (ord == "push_front") {
            cin >> tmp;
            d.push_front(tmp);
        } else if (ord == "push_back") {
            cin >> tmp;
            d.push_back(tmp);
        } else if (ord == "pop_front") {
            if (!d.empty()) {
                cout << d.front() << '\n';
                d.pop_front();
            } else cout << -1 << '\n';
        } else if (ord == "pop_back") {
            if (!d.empty()) {
                cout << d.back() << '\n';
                d.pop_back();
            } else cout << -1 << '\n';
        } else if (ord == "size") cout << d.size() << '\n';
        else if (ord == "empty") cout << d.empty() << '\n';
        else if (ord == "front") cout << (d.empty() ? -1 : d.front()) << '\n';
        else if (ord == "back") cout << (d.empty() ? -1 : d.back()) << '\n';
    }
    return 0;
}
