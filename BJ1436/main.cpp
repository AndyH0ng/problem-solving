//
//  영화감독 숌
//  BJ1436
//
//  Created by 준우 on 9/27/24.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int i = 666, n, cnt = 0;
    string str;
    cin >> n;
    while (1) {
        str = to_string(i);
        for (int j = 0; j < str.length() - 2; j++) {
            if (str[j] == '6' &&
                str[j + 1] == '6' &&
                str[j + 2] == '6') {
                cnt++;
                break;
            }
        }
        if (cnt == n) break;
        i++;
    }
    cout << i;
    return 0;
}
