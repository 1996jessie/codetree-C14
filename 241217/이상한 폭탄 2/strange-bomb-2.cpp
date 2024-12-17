#include <iostream>

#define MAX_N 100

using namespace std;

int n, k;
int num[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }
    
    int ans = -1;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(j - i > k) {
                break;
            }
            
            if(num[i] != num[j]) {
                continue;
            }
            
            ans = max(ans, num[i]);
        }
    }
    
    cout << ans;
    
    return 0;
}
