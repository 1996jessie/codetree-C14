#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;

    while(1) {
        if(n == 1) {
            break;
        }

        if(n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }

        cnt++;
    }

    cout << cnt;

    return 0;
}