//
//  제로
//  BJ10773
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
    int k, ipt, sum = 0;
    stack<int> st;
    cin >> k;
    while (k--) {
        cin >> ipt;
        if (ipt) st.push(ipt);
        else st.pop();
    }
    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }
    cout << sum;
    return 0;
}

