#include <iostream>
#include <algorithm>

#define MAX_NUM 10000

using namespace std;

int n, k;
int arr[MAX_NUM + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;
        
        if (c == 'G') {
            arr[x] = 1;
        } else {
            arr[x] = 2;
        }
    }

    int max_sum = 0;
    for (int i = 0; i <= MAX_NUM - k; i++) {
        int sum = 0;
        for (int j = i; j < i + k; j++) {  
            sum += arr[j];
        }

        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    return 0;
}
