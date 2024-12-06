#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    int len = str.length();

    for (int i = 0; i < len; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            cout << (char)tolower(str[i]);
        }
        if (str[i] >= '0' && str[i] <= '9') {
            cout << str[i];
        }
    }

    return 0;
}