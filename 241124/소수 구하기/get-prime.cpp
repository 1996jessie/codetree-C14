#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            continue;
        }
        bool isprime = true;

        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                isprime = false;
            }
        }

        if(isprime) {
            cout << i << " ";
        }
    }

    return 0;
}