#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
	int i;

	cin >> a >> b;
    i = a;

	while(i <= b) {
		cout << i << " ";
		i += 2;
	}

    return 0;
}