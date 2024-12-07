#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    string b;
    cin >> a;
    cin >> b;
	
    int len = a.length();
	int cnt = 0;
	
	for(int i = 0; i < len; i++) {
        a = a.substr(len - 1, 1) + a.substr(0, len - 1);

        cnt++;
		
		if(a == b) {
            cout << cnt;
            break;
        }

	    if(i == len - 1) {
            cout << "-1";
        }
	}
	
    return 0;
}