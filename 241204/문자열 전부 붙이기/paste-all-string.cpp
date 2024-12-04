#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[10];
    string str_all;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }

    for(int i = 0; i < n; i++) {
        str_all += str[i];
    }

    cout << str_all;

    return 0;
}