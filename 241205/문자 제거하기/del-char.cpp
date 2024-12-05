#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    int len = str.length();

    while (len > 1) {
        int a;
        cin >> a;

        if (a >= len) {
            a = len - 1;
        }

        str.erase(a, 1);
        len--;

        cout << str << endl;
    }

    return 0;
}