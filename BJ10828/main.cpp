//
//  스택
//  BJ10828
//
//  Created by 홍준우 on 7/2/24.
//

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string ipt;
    stack<int> st;
    cin >> n;
    while (n--) {
        cin >> ipt;
        if (ipt == "push") {
            int x;
            cin >> x;
            st.push(x);
        }
        else if (ipt == "pop") {
            if (st.empty())
                cout << -1 << '\n';
            else {
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if (ipt == "size") {
            cout << st.size() << '\n';
        }
        else if (ipt == "empty") {
            cout << (st.empty() ? 1 : 0) << '\n';
        }
        else if (ipt == "top") {
            cout << (st.empty() ? -1 : st.top()) << '\n';
        }
    }
    return 0;
}
