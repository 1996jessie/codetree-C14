#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    char a = str[0];
    char b = str[1];

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == b) {
            str[i] = a;
        }
    }

    cout << str;

    return 0;
}