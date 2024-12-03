#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    string str2;

    getline(cin, str);
    getline(cin, str2);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            printf("%c", str[i]);
        }
    }

    for (int i = 0; i < str2.length(); i++) {
        if (str2[i] != ' ') {
            printf("%c", str2[i]);
        }
    }

    return 0;
}