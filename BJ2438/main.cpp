//
//  별 찍기 - 1
//  BJ2438
//
//  Created by 준우 on 6/19/24.
//

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << '*';
        } std::cout << '\n';
    }
    return 0;
}
