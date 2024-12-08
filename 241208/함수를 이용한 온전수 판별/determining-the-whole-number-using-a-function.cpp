#include <iostream>

using namespace std;

bool JudgeNumber(int n) {
    if (n % 2 == 0) {
        return false;
    } else if (n % 10 == 5) {
        return false;
    } else if (n % 3 == 0 && n % 9 != 0) {
        return false;
    } else {
        return true;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int cnt = 0;

    for (int i = a; i <= b; i++) {
        if (JudgeNumber(i)) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}