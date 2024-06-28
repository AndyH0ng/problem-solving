//
//  A + B - 4
//  BJ10951
//
//  Created by 홍준우 on 6/19/24.
//

#include <stdio.h>

int main(void) {
    int a, b;
    while (scanf("%d %d", &a, &b) != -1) {
        printf("%d\n", a + b);
    }
    return 0;
}

// scanf()는 성공적으로 변환되고 할당된 필드 수를 반환한다.
// 가령 다음의 경우 성공적으로 a, b를 받을 경우 2를 반환한다.
// 한편 EOF를 입력받을 때, 즉 파일의 끝에 도달할 경우 -1를 반환한다.
