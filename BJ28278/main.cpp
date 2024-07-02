//
//  스택 2
//  BJ28278
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
    unsigned int n, ipt;
    stack<int> st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ipt;
        if (ipt == 1) {
            int x;
            cin >> x;
            st.push(x);
        } else if (ipt == 2) {
            if (st.empty())
                cout << -1 << '\n';
            else {
                cout << st.top() << '\n';
                st.pop();
            }
        } else if (ipt == 3) {
            cout << st.size() << '\n';
        } else if (ipt == 4) {
            cout << (st.empty() ? 1 : 0) << '\n';
        } else if (ipt == 5) {
            cout << (st.empty() ? -1 : st.top()) << '\n';
        }
    }
    return 0;
}
