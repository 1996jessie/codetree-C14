#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    cout << fixed;
    cout.precision(0);
    int sum, avg;
    sum = a + b + c;
    avg = (a + b + c) / 3;
    cout << sum << endl << avg << endl << sum - avg;
    return 0;
}