#include <iostream>

#define MAX_N 100

using namespace std;

int n;
int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }
            
            double avg = (double)sum / (j - i + 1);
            
            bool exists = false;
            for(int k = i; k <= j; k++) {
                if(arr[k] == avg) {
                    exists = true;
                }
            }
            
            if(exists) {
                cnt++;
            }
        }
    }
    
    cout << cnt;
    return 0;
}
