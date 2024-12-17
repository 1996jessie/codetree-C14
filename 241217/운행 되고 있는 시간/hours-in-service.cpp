#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_NUM 1000

using namespace std;

int n;
int l[MAX_N], r[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }
    
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int count[MAX_NUM] = {};

        for(int j = 0; j < n; j++) {
            if(j == i) {
                continue;
            }

            for(int k = l[j]; k < r[j]; k++) {
                count[k]++;
            }
        }
        
        int time = 0;
        
        for(int j = 1; j < MAX_NUM; j++) {
            if(count[j]) {
                time++;
            }
        }

        ans = max(ans, time);
    }

    cout << ans;
    
    return 0;
}
