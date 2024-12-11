#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n;
int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            sort(arr, arr + i + 1);
            cout << arr[i / 2] << " ";
        }
    }
    return 0;
}
