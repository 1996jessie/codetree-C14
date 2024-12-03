#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    getline(cin, str);

    char a;
    cin >> a;

    int len = str.length();
    int cnt = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == a) {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}