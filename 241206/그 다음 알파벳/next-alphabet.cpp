#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char x;
    cin >> x;

    if (x == 'z') {
        cout << "a";
    } else {
        cout << (char)(x + 1);
    }

    return 0;
}