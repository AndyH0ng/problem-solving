//
//  나머지
//  BJ3052
//
//  Created by 준우 on 6/21/24.
//

#include <iostream>

using namespace std;

int main() {
    int tmp, cnt = 0, arr[42] = {0, };
    for (int i = 0; i < 10; i++) {
        cin >> tmp;
        arr[tmp % 42]++;
    }
    for (int i = 0; i < 42; i++) {
        if (arr[i]) cnt++;
    }
    cout << cnt;
    return 0;
}
