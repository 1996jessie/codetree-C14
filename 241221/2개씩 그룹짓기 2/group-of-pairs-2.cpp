#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100000

using namespace std;

int n;
int arr[2 * MAX_N];
int ans = INT_MAX;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 1; i <= 2 * n; i++) {
        cin >> arr[i];
    }

    sort(arr + 1, arr + 2 * n + 1);

    for(int i = 1; i <= n; i++) {
        ans = min(ans, arr[n + i] - arr[i]);
    }

    cout << ans;
    return 0;
}
