//
//  유기농 배추
//  BJ1012
//
//  Created by 준우 on 2/20/25.
//

#include <iostream>
#include <vector>

using namespace std;

int t, m, n, k;
int arg[][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

void dfs(int i, int j, vector<vector<int>> &farm) {
    farm[j][i] = 0;
    for (int k = 0; k < 4; k++) {
        int x = i + arg[k][0], y = j + arg[k][1];
        if (x >= 0 && x < m &&
            y >= 0 && y < n &&
            farm[y][x]) dfs(x, y, farm);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> m >> n >> k;
        vector<vector<int>> farm(n, vector<int>(m, 0));
        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            farm[y][x] = 1;
        }
        int cnt = 0;
        for (int x = 0; x < m; x++) {
            for (int y = 0; y < n; y++) {
                if (farm[y][x]) {
                    cnt++;
                    dfs(x, y, farm);
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
