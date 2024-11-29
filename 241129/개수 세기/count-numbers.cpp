#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
	cin >> n >> m;
	int arr[100];
	int cnt = 0;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		if(arr[i] == m) {
			cnt++;
        }
	}
	
    cout << cnt;

    return 0;
}