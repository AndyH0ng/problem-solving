//
//  덩치
//  BJ7568
//
//  Created by 준우 on 2/19/25.
//

#include <iostream>
#include <utility>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    for (int i = 0; i < n; i++) {
        int rank = 1;
        for (int j = 0; j < n; j++) {
            if (p[i].first < p[j].first && p[i].second < p[j].second) rank++;
        }
        cout << rank << ' ';
    }
    return 0;
}
