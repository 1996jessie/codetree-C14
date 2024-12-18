#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n, m;
int arr[MAX_N + 1];

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        int sum_element = 0;
        int cur = i;

        for(int j = 1; j <= m; j++) {
            sum_element += arr[cur];
            cur = arr[cur];
        }
        
        ans = max(ans, sum_element);
    }

    cout << ans;
    return 0;
}
