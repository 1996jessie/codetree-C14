#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 1000

int n, k;
int nums[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums, nums + n);

    cout << nums[k - 1];

    return 0;
}
