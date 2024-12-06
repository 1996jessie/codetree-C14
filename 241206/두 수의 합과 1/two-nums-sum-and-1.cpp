#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int c = a + b;
    string c_str;
    int cnt = 0;

    c_str = to_string(c);

    int len = c_str.length();

    for(int i = 0; i < len; i++) {
        if(c_str[i] == '1') {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}