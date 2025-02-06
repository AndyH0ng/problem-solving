//
//  단어 공부
//  BJ1157
//
//  Created by 준우 on 9/2/24.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int max = 0, cnt[26] = {0, };
    char tmp;
    string s;
    cin >> s;
    for (char i : s) {
        if ('A' <= i && i <= 'Z') cnt[i - 'A']++;
        else cnt[i - 'a']++;
    }
    bool isMax = 1;
    for (int i = 0; i < 26; i++) {
        if (max < cnt[i]) {
            max = cnt[i];
            tmp = i + 'A';
            isMax = 1;
        } else if (max != 0 && max == cnt[i]) {
            isMax = 0;
        }
    }
    cout << (isMax ? tmp : '?');
    return 0;
}
