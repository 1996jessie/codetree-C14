#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>

#define MAX_N 100

using namespace std;

int n;
int a[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = i + 2; j < n; j++) {
            if (ans < a[i] + a[j]) {
                ans = a[i] + a[j];
            }
        }
    }

    cout << ans;

    return 0;
}
