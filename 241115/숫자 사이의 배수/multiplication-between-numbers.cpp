#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int sum = 0, cnt = 0;
    double avg;

    cin >> a >> b;

    for(int i = a; i <= b; i++) {
        if(i % 5 == 0 || i % 7 == 0) {
            sum += i;
            cnt++;
        }
    }

    avg = (double)sum / cnt;

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;

    return 0;
}