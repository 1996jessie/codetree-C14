#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, temp;
    a = 5;
    b = 6;
    c = 7;
    temp = a;
    a = c;
    c = b;
    b = temp;
    cout << a << endl << b << endl << c;
    return 0;
}