#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    string a_str;
    int cnt = 0;

    a_str = to_string(a);

    int len = a_str.length();

    for(int i = 0; i < len; i++) {
        cnt += a_str[i] - '0';
    }

    printf("%d", cnt);

    return 0;
}