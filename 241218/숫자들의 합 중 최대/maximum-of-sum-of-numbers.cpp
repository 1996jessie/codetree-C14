#include <iostream>
#include <algorithm>

using namespace std;

int x, y;

int DigitSum(int n) {
    if(n < 10) {
        return n;
    } else {
        return DigitSum(n / 10) + (n % 10);
    }
}

int main() {
    // 여기에 코드를 작성해주세요
    cin >> x >> y;

    int ans = 0;

    for(int i = x; i <= y; i++) {
        ans = max(ans, DigitSum(i));
    }
    
    cout << ans;
    return 0;
}
