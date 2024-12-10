#include <iostream>

using namespace std;

int Sum(int n) {
    if (n < 10) {
        return n * n;
    }

    int digit = (n % 10);
    return Sum(n / 10) + digit * digit;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << Sum(n);
    return 0;
}