#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            cout << (char)toupper(str[i]);
        } else {
            cout << (char)tolower(str[i]);
        }
    }

    return 0;
}