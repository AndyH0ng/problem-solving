//
//  막대기
//  BJ17608
//
//  Created by 준우 on 7/2/24.
//

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, h, tmp, cnt = 1;
    stack<int> st;
    cin >> n;
    while (n--) {
        cin >> h;
        st.push(h);
    }
    int max = st.top();
    while (st.size() > 1) {
        tmp = st.top();
        st.pop();
        if (max < st.top()) {
            max = st.top();
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
