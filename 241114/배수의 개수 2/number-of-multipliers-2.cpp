#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, cnt = 0;

	for(int i = 1; i <= 10; i++) {
		cin >> a;
		
		if(a % 2 == 1)
			cnt++;
	}
    
	cout << cnt;

    return 0;
}