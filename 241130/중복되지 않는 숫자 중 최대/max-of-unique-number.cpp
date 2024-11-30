#include <iostream>
using namespace std;

#define MAX_N 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n, nums[MAX_N];

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int max = -1;
    for(int i = 0; i < n; i++) {
        int curr_num = nums[i];
        if(max < curr_num) {
            int count = 0;
            for(int j = 0; j < n; j++) {
                if(nums[j] == curr_num) {
                    count++;
                }
            }
            if(count == 1) {
                max = curr_num;
            }
        }
    }

    cout << max;
    return 0;
}