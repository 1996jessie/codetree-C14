#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    double ft, mi;
    ft = 30.48;
    mi = 160934;
    ft *= 9.2;
    mi *= 1.3;
    cout.precision(1);
    cout << "9.2ft = " << ft << "cm" << endl;
    cout << "1.3mi = " << mi << "cm";
    return 0;
}