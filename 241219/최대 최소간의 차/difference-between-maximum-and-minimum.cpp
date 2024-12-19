#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100
#define MAX_K 10000

using namespace std;

int n, k;
int arr[MAX_N];

int GetCost(int low, int high) {
    int cost = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < low) {
            cost += low - arr[i];
        }
        if(arr[i] > high) {
            cost += arr[i] - high;
        }
    }
    return cost;
}

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;
    for(int num = 1; num <= MAX_K; num++) {
        ans = min(ans, GetCost(num, num + k));
    }

    cout << ans;
    return 0;
}
