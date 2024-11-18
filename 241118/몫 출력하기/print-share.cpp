#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;

    while(1) {
        int n;
        cin >> n;

        if(n % 2 == 1) {
            continue;
        }

        cout << n / 2 << endl;
        cnt++;

        if(cnt >= 3) {
            break;
        }
    }

    return 0;
}