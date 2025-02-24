//
//  색종이 - 2
//  BJ2567
//
//  Created by 준우 on 2/21/25.
//

#include <iostream>

using namespace std;

int getSide(int x, int y, int a[][101]) {
    int r[] = {-1, 1, 0, 0}, c[] = {0, 0, -1, 1}, cnt = 0;
    for (int i = 0; i < 4; i++)
        if (!a[x + r[i]][y + c[i]]) cnt++;
    return cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x, y, pmt = 0, isFilled[101][101] = {0};
    cin >> n;
    while (n--) {
        cin >> x >> y;
        for (int i = y; i < y + 10 && i < 101; i++)
            for (int j = x; j < x + 10 && j < 101; j++)
                isFilled[i][j] = 1;
    }
    for (int i = 0; i < 101; i++)
        for (int j = 0; j < 101; j++)
            if (isFilled[i][j]) pmt += getSide(i, j, isFilled);
    cout << pmt;
    return 0;
}
