#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
	cin >> n;
	
	string str;
	string str2;
	cin >> str;
	
	int cnt = 0;
	
	for(int i = 0; i < n; i++) {
		cin >> str2;

		if(str == str2) {
			cnt++;
        }
	}

	cout << cnt;
	
    return 0;
}