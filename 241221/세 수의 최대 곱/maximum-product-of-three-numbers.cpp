#include <iostream>
#include <algorithm>

#define MAX_N 100000

using namespace std;

// 변수 선언
int n;
int arr[MAX_N + 1];

int ans;
int negative, zero, positive;

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    sort(arr + 1, arr + n + 1);
    for(int i = 1; i <= n; i++) {
        if(arr[i] < 0) {
            negative++;
        }
        if(arr[i] == 0) {
            zero++;
        }
        if(arr[i] > 0) {
            positive++;
        }
    }

    if(positive >= 3 || (positive >= 1 && negative >= 2)) {
        if(positive >= 3) {
            ans = max(ans, arr[n] * arr[n - 1] * arr[n - 2]);
        }
        if(positive >= 1 && negative >= 2) {
            ans = max(ans, arr[n] * arr[2] * arr[1]);
        }
    } else if(zero >= 1) {
        ans = 0;
    } else {
        ans = arr[n] * arr[n - 1] * arr[n - 2];
    }
    
    cout << ans;
    return 0;
}
