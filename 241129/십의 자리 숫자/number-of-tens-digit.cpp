#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int count_arr[10] = {};
	int arr[99];
	
	for(int i = 0; i < 99; i++) {
		cin >> arr[i];
		if(arr[i] == 0) {
			break;
        }
		if(arr[i] < 10) {
			continue;
        }
		count_arr[arr[i] / 10]++;
	}
	
    for(int i = 1; i <= 9; i++) {
        cout << i << " - " << count_arr[i] << endl;
    }

    return 0;
}