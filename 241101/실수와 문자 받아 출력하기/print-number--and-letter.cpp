#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    char c;
    double a, b;
    cin >> c >> a >> b;
    cout.precision(2);
    cout << c << endl << a << endl << b;
    return 0;
}