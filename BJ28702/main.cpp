//
//  FizzBuzz
//  BJ28702
//
//  Created by 홍준우 on 6/24/24.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input[3];
    cin >> input[0]
        >> input[1]
        >> input[2];
    // ? ? N
    if (49 <= input[2][0] && input[2][0] <= 57) {
        switch (stoll(input[2]) % 15) {
            // 3 9 12
            case 2: case 8: case 11:
                cout << "Fizz";
                break;
            // 5
            case 4:
                cout << "Buzz";
                break;
            // 0
            case 14:
                cout << "FizzBuzz";
                break;
            // 2 8 14
            case 1: case 7: case 13:
                cout << stoll(input[2]) + 1;
        }
    // ? N X
    } else if (49 <= input[1][0] && input[1][0] <= 57) {
        switch (stoll(input[1]) % 15) {
            // 6
            case 4:
                cout << "Fizz";
                break;
            // 10
            case 8:
                cout << "Buzz";
                break;
            // 4 13 1
            default:
                cout << stoll(input[1]) + 2;
        }
    // N X X
    } else {
        // 7 11
        cout << stoll(input[0]) + 3;
    }
    return 0;
}
