//
//  main.cpp
//  BJ10951
//
//  Created by 홍준우 on 6/19/24.
//

#include <iostream>

int main() {
    int a, b;
    while (std::cin >> a >> b) {
        std::cout << a + b << '\n';
    }
    return 0;
}

// cin은 데이터를 읽은 후 스트림 객체를 반환한다.
// 다만 조건문 안에 있는 경우에는 bool 타입 변환에 따라 true, false로 해석된다.
// cin이 데이터를 입력받는 과정에서 실패 시 false를 반환한다.
