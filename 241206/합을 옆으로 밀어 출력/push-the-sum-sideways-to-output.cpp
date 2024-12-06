#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int num = 0;
    string num_str;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        num += a;
    }

    num_str = to_string(num);

    int len = num_str.length();
    num_str = num_str.substr(1, len - 1) + num_str.substr(0, 1);

    cout << num_str;

    return 0;
}