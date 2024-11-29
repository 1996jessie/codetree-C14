#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
	cin >> n;
	int count_arr[10] = {};
	int arr[100];

	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		count_arr[arr[i]]++;
	}
	
    for(int i = 1; i <= 9; i++) {
        cout << count_arr[i] << endl;
    }

    return 0;
}