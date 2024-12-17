#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>

#define MAX_N 5

using namespace std;

int n = MAX_N;
int arr[MAX_N];
int total_sum;

int Diff(int i, int j, int k) {
    int return_value = INT_MAX;

    int sum1 = arr[i];
    int sum2 = arr[j] + arr[k];
    int sum3 = total_sum - arr[i] - arr[j] - arr[k];

    if(sum1 == sum2 || sum2 == sum3 || sum3 == sum1)
        return return_value;
    
    return max(max(sum1, sum2), sum3) - min(min(sum1, sum2), sum3);
}

int main() {
    // 여기에 코드를 작성해주세요
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        total_sum += arr[i];
    }
    
    int min_diff = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(i != j && j != k && i != k) {
                    min_diff = min(min_diff, Diff(i, j, k));
                }
            }
        }
    }
    
    if(min_diff == INT_MAX)
        cout << -1;
    else
        cout << min_diff;
    
    return 0;
}
