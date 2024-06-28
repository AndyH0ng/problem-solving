//
//  문자열 반복
//  BJ2675
//
//  Created by 홍준우 on 6/19/24.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, r;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> r >> s;
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < r; j++)
                cout << s[i];
        } cout << '\n';
    }
    return 0;
}
