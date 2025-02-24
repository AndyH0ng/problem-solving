//
//  균형잡힌 세상
//  BJ4949
//
//  Created by 준우 on 2/21/25.
//

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    while (1) {
        stack<char> s;
        getline(cin, str);
        if (str == ".") break;
        bool isBalanced = true;
        for (char c : str) {
            if (c == '(' || c == '[') s.push(c);
            else if (c == ')') {
                if (s.empty() || s.top() != '(') {
                    isBalanced = false;
                    break;
                }
                s.pop();
            } else if (c == ']') {
                if (s.empty() || s.top() != '[') {
                    isBalanced = false;
                    break;
                }
                s.pop();
            }
        }
        if (!s.empty()) isBalanced = false;
        cout << (isBalanced ? "yes\n" : "no\n");
    }
    return 0;
}
