#include <iostream>
#include <climits>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string binary;
    cin >> binary;

    int ans = INT_MIN;
    for(int i = 0; i < (int) binary.size(); i++) {
        binary[i] = '0' + '1' - binary[i];
        int num = 0;
        for(int j = 0; j < (int) binary.size(); j++) {
            num = num * 2 + (binary[j] - '0');
        }
        ans = max(ans, num);
        binary[i] = '0' + '1' - binary[i];
    }

    cout << ans;

    return 0;
}
