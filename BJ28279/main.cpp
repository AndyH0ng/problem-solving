//
//  덱 2
//  BJ28279
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
    int n, x, tmp;
    deque<int> d;
    cin >> n;
    while (n--) {
        cin >> tmp;
        switch (tmp) {
            case 1:
                cin >> x;
                d.push_front(x);
                break;
            case 2:
                cin >> x;
                d.push_back(x);
                break;
            case 3:
                if (d.empty()) cout << -1 << '\n';
                else {
                    cout << d.front() << '\n';
                    d.pop_front();
                }
                break;
            case 4:
                if (d.empty()) cout << -1 << '\n';
                else {
                    cout << d.back() << '\n';
                    d.pop_back();
                }
                break;
            case 5: cout << d.size() << '\n'; break;
            case 6: cout << d.empty() << '\n'; break;
            case 7: cout << (d.empty() ? -1 : d.front()) << '\n'; break;
            case 8: cout << (d.empty() ? -1 : d.back()) << '\n'; break;
        }
    }
    return 0;
}
