#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int count_arr[5] = {};
	int type_num = 0;
	char s;
	int t;
	
	for(int i = 0; i < 3; i++) {
		cin >> s >> t;

		if(t >= 37 && s == 'Y') {
			type_num = 1;
        } else if(t >= 37) {
			type_num = 2;
        } else if(s == 'Y') {
			type_num = 3;
        } else {
			type_num = 4;
        }
		count_arr[type_num]++;
	}
	
    for(int i = 1; i <= 4; i++) {
        cout << count_arr[i] << " ";
    }
	
	if(count_arr[1] >= 2) {
		cout << "E";
    }

    return 0;
}