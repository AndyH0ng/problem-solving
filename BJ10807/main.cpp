//
//  개수 세기
//  BJ10807
//
//  Created by 홍준우 on 6/19/24.
//

#include <iostream>

int main() {
    int n, v, cnt = 0;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    std::cin >> v;
    for (int tmp : arr) if (tmp == v) cnt++;
    std::cout << cnt;
    return 0;
}

// 범위 기반 for 문
// Range-based for Statement
//
// for (DATA_TYPE ELEM : DATA_LIST) {
//     STATEMENT with ELEM
// }
