#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    string b;
    int ans = 0;

    cin >> a;
    cin >> b;

    int len = a.length();

    for (int i = 0; i < len - 1; i++) {
        if (a[i] == b[0] && a[i + 1] == b[1]) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}