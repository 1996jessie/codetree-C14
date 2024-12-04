#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;
    string c = a + b;
    string d = b + a;
    cout << (c == d ? "true" : "false");
    return 0;
}