#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100

using namespace std;

int n;
int x1[MAX_N], x2[MAX_N];
int ans = INT_MAX;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    for(int skip = 1; skip <= n; skip++) {
        int max_x2 = 0;
        int min_x1 = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(i == skip) {
                continue;
            }
            max_x2 = max(max_x2, x2[i]);
            min_x1 = min(min_x1, x1[i]);
        }

        ans = min(ans, max_x2 - min_x1);
    }

    cout << ans;
    return 0;
}
