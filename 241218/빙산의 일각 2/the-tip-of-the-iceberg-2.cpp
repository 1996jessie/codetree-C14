#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_H 1000

using namespace std;

int n;
int h[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int ans = 0;

    for(int i = 1; i < MAX_H; i++) {
        int cnt = 0;

        if(h[0] > i) {
            cnt++;
        }

        for(int j = 1; j < n; j++) {
            if(h[j] > i && h[j - 1] <= i) {
                cnt++;
            }
        }

        ans = max(ans, cnt);
    }
    
    cout << ans;
    return 0;
}
