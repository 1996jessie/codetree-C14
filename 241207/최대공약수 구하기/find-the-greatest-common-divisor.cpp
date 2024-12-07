#include <iostream>
#include <algorithm>

using namespace std;

void FindGcd(int n, int m) {
    int gcd = 0;
    for(int i = 1; i <= min(n, m); i++) {
        if(n % i == 0 && m % i == 0) {
            gcd = i;
        }
    }

    cout << gcd;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    FindGcd(n, m);
    
    return 0;
}