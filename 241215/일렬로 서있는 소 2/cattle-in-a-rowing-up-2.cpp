#include <iostream>

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

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i] <= arr[j] && arr[j] <= arr[k]) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}
