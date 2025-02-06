//
//  나이순 정렬
//  BJ10814
//
//  Created by 준우 on 7/15/24.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Member {
    int age;
    string name;
};

bool compare(const Member &now, const Member &last) {
    if(now.age != last.age) return now.age < last.age;
    return false;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    Member lst[100000];
    for (int i = 0; i < n; i++)
        cin >> lst[i].age >> lst[i].name;
    stable_sort(lst, lst + n, compare);
    for (int i = 0; i < n; i++)
        cout << lst[i].age << ' ' << lst[i].name << '\n';
    return 0;
}
