#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, cnt3 = 0, cnt5 = 0;

	for(int i = 1; i <= 10; i++) {
		cin >> a;
		
		if(a % 3 == 0)
			cnt3++;
		if(a % 5 == 0)
			cnt5++;
	}

	cout << cnt3 << " " << cnt5;

    return 0;
}