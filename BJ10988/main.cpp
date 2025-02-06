//
//  펠린드롬인지 확인하기
//  BJ10988
//
//  Created by 준우 on 2/1/25.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0, j = s.length() - 1;
    while (i <= j / 2 && s[i] == s[j - i]) i++;
    cout << ((i > j / 2) ? 1 : 0);
    return 0;
}
