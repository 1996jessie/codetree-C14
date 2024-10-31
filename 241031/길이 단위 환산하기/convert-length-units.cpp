#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    double ft;
    cin >> ft;
    ft *= 30.48;
    cout.precision(1);
    cout << ft;
    return 0;
}