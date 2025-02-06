//
//  도키도키 간식드리미
//  BJ12789
//
//  Created by 준우 on 9/2/24.
//

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, tmp, cnt = 1, i = 0;
    cin >> n;
    int arr[n];
    stack<int> s;
    while (n--) {
        cin >> tmp;
        while (!s.empty() && s.top() == cnt) {
            arr[i++] = cnt++;
            s.pop();
        }
        if (tmp != cnt) s.push(tmp);
        else {
            arr[i++] = tmp;
            cnt++;
        }
    }
    while (!s.empty()) {
        if (s.top() != cnt) {
            cout << "Sad" << endl;
            return 0;
        }
        else {
            arr[i++] = cnt;
            s.pop();
            cnt++;
        }
    }
    cout << "Nice" << endl;
    return 0;
}
