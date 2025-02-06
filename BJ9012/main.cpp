//
//  괄호
//  BJ9012
//
//  Created by 준우 on 7/10/24.
//

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string str;
        stack<int> st;
        int tmp = 1;
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(') st.push(1);
            else if (str[i] == ')') {
                if (!st.empty()) st.pop();
                else {
                    tmp = 0;
                    break;
                }
            }
        }
        if (st.empty() && tmp == 1) cout << "YES\n";
        else cout << "NO\n";
        while (!st.empty()) st.pop();
    }
    return 0;
}
