#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define MAX_N 100

int nums[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums, nums + n);

    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    sort(nums, nums + n, greater<int>());

    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
