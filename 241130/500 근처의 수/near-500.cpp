#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int max_val = 1;
    int min_val = 1000;

    for(int i = 0; i < 10; i++) {
        if(arr[i] < 500 && arr[i] > max_val) {
            max_val = arr[i];
        }

        if(arr[i] > 500 && arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    cout << max_val << " " << min_val;

    return 0;
}