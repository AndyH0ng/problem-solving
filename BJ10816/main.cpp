//
//  숫자 카드 2
//  BJ10816
//
//  Created by 준우 on 8/30/24.
//

#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M, tmp;
    map<int, int> m;
    cin >> N;
    while (N--) {
        cin >> tmp;
        m[tmp]++;
    }
    cin >> M;
    while (M--) {
        cin >> tmp;
        cout << m[tmp] << ' ';
    }
    return 0;
}
