#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int k;

	for(int i = 0; i < 100; i++) {
		cin >> arr[i];
		if (arr[i] == 0){
			k = i;
			break;
		}
	}

    cout << arr[k - 3] + arr[k - 2] + arr[k - 1];

    return 0;
}