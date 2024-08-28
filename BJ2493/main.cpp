//
//  탑
//  BJ2493
//
//  Created by 홍준우 on 8/28/24.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, tmp = 100'000'001, i = 0;
    stack<pair<int, int>> s;
    cin >> n;
    while (i < n) {
        s.push({tmp, i++});
        cin >> tmp;
        if (s.top().first < tmp)
            do s.pop(); while (s.top().first < tmp);
        cout << s.top().second << ' ';
    }
    return 0;
}

// 내가 궁금한 것: tmp보다 큰 가장 가까운? 값
//   -> tmp보다 작은 값들은 지금 구하고자 하는 값이나 추후 구할 값이나 아무 영향도 주지 못하기 때문 (Ex. 5 7 2)
// -> tmp보다 큰 값이 나올때까지 계속해서 pop
// 25줄에 do-while을 쓴 이유는 이미 top의 값이 tmp보다 작음이 확정 났기에 굳이 top < tmp를 조사할 가치가 없기 때문임.
