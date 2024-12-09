#include <iostream>

using namespace std;

void ChangeNumber(int &a, int &b) {
    if (a > b) {
        b *= 2;
        a += 25;
    } else {
        a *= 2;
        b += 25;
    }
    return;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    ChangeNumber(a, b);

    cout << a << " " << b;

    return 0;
}