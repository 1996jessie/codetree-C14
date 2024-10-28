#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    double a, b;
    a = 5.26;
    b = 8.27;
    cout.precision(3);
    cout << a * b;
    return 0;
}