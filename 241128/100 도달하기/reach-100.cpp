#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
	cin >> n;
	int arr[100] = {1, n};
	int cnt = 1;

    while(true) {
		cnt++;
		arr[cnt] = arr[cnt - 1] + arr[cnt - 2];
		if(arr[cnt] > 100) {
			break;
        }
	}

    for(int i = 0; i <= cnt; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}