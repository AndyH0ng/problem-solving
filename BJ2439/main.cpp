//
//  별 찍기 - 2
//  BJ2439
//
//  Created by 홍준우 on 6/20/24.
//

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            std::cout << ' ';
        }
        for (int j = 1; j <= i; j++) {
            std::cout << '*';
        } std::cout << '\n';
    }
    return 0;
}
