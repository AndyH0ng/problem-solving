//
//  X보다 작은 수
//  BJ10871
//
//  Created by 준우 on 6/19/24.
//

#include <iostream>

int main() {
    int n, x, tmp;
    std::cin >> n >> x;
    int A[n];
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        if (tmp < x) std::cout << tmp << ' ';
    }
    return 0;
}
