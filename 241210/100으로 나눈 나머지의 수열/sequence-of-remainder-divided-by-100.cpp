#include <iostream>

using namespace std;

int Sequence(int a) {
    if(a == 1) {
        return 2;
    }
    if(a == 2) {
        return 4;
    }

    return (Sequence(a - 1) * Sequence(a - 2)) % 100;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << Sequence(n);

    return 0;
}
