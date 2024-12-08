#include <iostream>

using namespace std;

int Power(int a, int b) {
    int cnt = 1;
    for (int i = 1; i <= b; i++) {
        cnt *= a;
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    cout << Power(a, b);
    
    return 0;
}