#include <iostream>

using namespace std;

int Sum(int n) {
    if (n == 0) {
        return 0;
    }

    return Sum(n - 1) + n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << Sum(n);
    return 0;
}