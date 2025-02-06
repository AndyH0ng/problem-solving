//
//  학점계산
//  BJ2754
//
//  Created by 준우 on 6/19/24.
//

#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    double grade;
    switch (str[0]) {
        case 'A':
            grade = 4.0;
            break;
        case 'B':
            grade = 3.0;
            break;
        case 'C':
            grade = 2.0;
            break;
        case 'D':
            grade = 1.0;
            break;
        default:
            grade = 0;
    }
    switch (str[1]) {
        case '+':
            grade += 0.3;
            break;
        case '0':
            break;
        case '-':
            grade -= 0.3;
    }
    cout.precision(1);
    cout << std::fixed << grade << endl;
    return 0;
}
