//
//  오븐 시계
//  BJ2525
//
//  Created by 준우 on 6/19/24.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int hr, min;
    cin >> a >> b >> c;
    min = 60 * a + b + c;
    hr = (int) (min / 60);
    if (hr >= 24) hr -= 24;
    min %= 60;
    cout << hr << " " << min;
    return 0;
}
