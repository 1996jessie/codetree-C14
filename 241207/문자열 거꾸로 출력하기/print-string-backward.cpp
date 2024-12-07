#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < 10; i++) {
		string str;
		cin >> str;
		
		if(str == "END") {
			break;
        }
		
		int len = str.length();
		
		for(int i = len - 1; i >= 0; i--) {
			cout << str[i];
        }

		cout << endl;
	}
				   
    return 0;
}