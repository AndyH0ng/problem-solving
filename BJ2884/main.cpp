//
//  알람 시계
//  BJ2884
//
//  Created by 홍준우 on 6/19/24.
//

#include <iostream>

using namespace std;

int main() {
    int hr, min;
    cin >> hr >> min;
    if (min >= 45) min -= 45;
    else {
        min += 15;
        hr--;
    }
    if (hr < 0) hr = 23;
    cout << hr << " " << min;
    return 0;
}
