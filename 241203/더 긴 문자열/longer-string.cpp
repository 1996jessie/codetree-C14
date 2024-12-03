#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1;
	string str2;
	
	cin >> str1;
	cin >> str2;
	
	int len1 = str1.length();
	int len2 = str2.length();
	
	if(len1 > len2) {
		cout << str1 << " " << len1;
    } else if(len1 < len2) {
		cout << str2 << " " << len2;
    } else {
		cout << "same";
    }
    
    return 0;
}