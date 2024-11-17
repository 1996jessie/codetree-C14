#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 0;

    cin >> n;

    for(int i = 1; i <= 100; i++) {
        if(n <= 1) {
            cout << cnt;
            break;
        }
        n /= i;
        cnt++;
    }

    return 0;
}