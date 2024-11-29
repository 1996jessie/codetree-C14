#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
	cin >> a >> b;
	int count_arr[10] = {};
    int ans = 0;
	
	while(a > 1) {
        count_arr[a % b]++;
        a /= b;
    }
	
    for(int i = 0; i < b; i++) {
        ans += count_arr[i] * count_arr[i];
    }

    cout << ans;

    return 0;
}