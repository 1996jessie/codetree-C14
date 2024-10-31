#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    double a;
    cin >> a;
    a += 1.5;
    cout.precision(2);
    cout << a;
    return 0;
}