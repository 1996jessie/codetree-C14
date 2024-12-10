#include <iostream>

using namespace std;

int StrangeSequence(int a) {
    if(a == 1) {
        return 1;
    }
    if(a == 2) {
        return 2;
    }

    return StrangeSequence(a / 3) + StrangeSequence(a - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << StrangeSequence(n);

    return 0;
}
