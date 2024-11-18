#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    int cnt = 0;

    while(1) {
        int n;
        cin >> n;

        if(n >= 30 || n <= 19) {
            cout << fixed;
            cout.precision(2);
            cout << (double)sum / cnt;
            break;
        }

        sum += n;
        cnt++;
    }

    return 0;
}