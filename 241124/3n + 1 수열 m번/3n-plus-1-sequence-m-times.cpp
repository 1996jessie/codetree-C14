#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    cin >> m;

    for(int i = 0; i < m; i++) {
        int n;
        cin >> n;
        int ans = 0;

        while(n != 1) {
            if(n % 2 == 0) {
                n /= 2;
            } else {
                n = n * 3 + 1;
            }
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}