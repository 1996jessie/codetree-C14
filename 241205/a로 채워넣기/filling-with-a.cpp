#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    int len = str.length();

    if (len > 1) {
        str[1] = 'a';
    }
    if (len > 2) {
        str[len - 2] = 'a';
    }

    cout << str;

    return 0;
}