#include <iostream>

#define MAX_N 1000
#define MAX_NUM 10000

using namespace std;

int n, k;
int arr[MAX_N];

int CountNum(int l, int r) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(l <= arr[i] && arr[i] <= r) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0;
    for(int i = 1; i <= MAX_NUM; i++) {
        ans = max(ans, CountNum(i, i + k));
    }
    cout << ans;
    return 0;
}
