#include <iostream>
#include <string>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    string str[201];
	int cnt = 0;

	while(true) {
		cin >> str[cnt];

		if(str[cnt] == "0") {
			break;	
        }
	
		cnt++;
	}
	
	cout << cnt << endl;
	
	for(int i = 0; i < cnt; i += 2) {
		cout << str[i] << endl;
    }

	
				   
    return 0;
}