#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

	cin >> str;

	int a;
	cin >> a;
	
	int len = str.length();
	int cnt = 0;

	for(int i = len - 1; i >= 0; i--) {
		if(cnt >= a) {
			break;
        }
		cout << str[i];
		cnt++;
	}
	
    return 0;
}