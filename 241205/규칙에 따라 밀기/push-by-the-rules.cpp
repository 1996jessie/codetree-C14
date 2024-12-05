#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    string str2;

    cin >> str;
    cin >> str2;

    int len = str.length();

    for (int i = 0; i < str2.length(); i++) {
        if (str2[i] == 'L') {
            str = str.substr(1, len - 1) + str.substr(0, 1);
        }
        else {
            str = str.substr(len - 1, 1) + str.substr(0, len - 1);
        }
    }

    cout << str;

    return 0;
}