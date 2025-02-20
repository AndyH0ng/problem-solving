//
//  프린터 큐
//  BJ1966
//
//  Created by 준우 on 2/20/25.
//

#include <iostream>
#include <utility>
#include <queue>

using namespace std;

bool mostPriority(int p, int *a) {
    for (int i = 9; i > p; i--) if (a[i]) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m, cnt = 0, priority[10] = {0, };
        cin >> n >> m;
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            q.push({p, i});
            priority[p]++;
        }
        while (1) {
            int key = q.front().first;
            if (mostPriority(key, priority)) {
                priority[key]--;
                cnt++;
                if (q.front().second == m) {
                    cout << cnt << '\n';
                    break;
                }
            } else q.push(q.front());
            q.pop();
        }
    }
    return 0;
}

