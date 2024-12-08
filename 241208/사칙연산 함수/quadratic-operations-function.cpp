#include <iostream>

using namespace std;

int Plus(int a, int b) {
    return a + b;
}

int Minus(int a, int b) {
    return a - b;
}

int Times(int a, int b) {
    return a * b;
}

int Divide(int a, int b) {
    return a / b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;

    cin >> a >> o >> c;

    if (o == '+') {
        cout << a << " + " << c << " = " << Plus(a, c);
    } else if (o == '-') {
        cout << a << " - " << c << " = " << Minus(a, c);
    } else if (o == '*') {
        cout << a << " * " << c << " = " << Times(a, c);
    } else if (o == '/') {
        cout << a << " / " << c << " = " << Divide(a, c);
    } else {
        cout << "False";
    }

    return 0;
}