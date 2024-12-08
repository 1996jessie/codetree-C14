#include <iostream>

using namespace std;

bool IsPrime(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool IsDigitSumEven(int n) {
    int digit_sum = (n / 100) + ((n / 10) % 10) + (n % 10);
    if (digit_sum % 2 == 0) {
        return true;
    }
    return false;
}

bool JudgeNum(int n) {
    if (IsPrime(n) && IsDigitSumEven(n)) {
        return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int cnt = 0;

    for (int i = a; i <= b; i++) {
        if (JudgeNum(i)) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}