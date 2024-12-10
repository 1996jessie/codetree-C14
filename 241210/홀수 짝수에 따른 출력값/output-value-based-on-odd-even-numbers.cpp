#include <iostream>

using namespace std;

int GetNum(int n) {
    if(n == 1) {
        return 1;
    }
    if(n == 2) {
        return 2;
    }
    return GetNum(n - 2) + n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << GetNum(n);
    return 0;
}