#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum = 0;

	cin >> n;
    
	for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if(a % 2 == 1 && a % 3 == 0) {
            sum += a;
        }
	}

    cout << sum;

    return 0;
}