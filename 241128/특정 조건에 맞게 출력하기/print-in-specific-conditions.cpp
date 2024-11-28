#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
	int new_arr[100];
    int zero_point;

    for(int i = 0; i < 100; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            zero_point = i;
            break;
        }
		if(arr[i] % 2 == 0) {
			new_arr[i] = arr[i] / 2;
        } 
        else {
			new_arr[i] = arr[i] + 3;
        }
    }

    for(int i = 0; i < zero_point; i++) {
        cout << new_arr[i] << " ";
    }

    return 0;
}