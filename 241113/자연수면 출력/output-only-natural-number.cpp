#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

	cin >> a >> b;

	if(a >= 1) {
		for(int i = 1; i <= b; i++)
			cout << a;
	}
	else {
		cout << "0";
	}
	
    return 0;
}