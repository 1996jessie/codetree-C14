#include <iostream>
#include <climits>

using namespace std;

#define MAX_N 100

int n, s;
int arr[MAX_N];
int array_sum;
int ans = INT_MAX;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        array_sum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int new_sum = array_sum - arr[i] - arr[j];
            int diff = abs(new_sum - s);
            ans = min(ans, diff);
        }
    }

    cout << ans;
    return 0;
}
