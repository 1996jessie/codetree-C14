#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_A 100

using namespace std;

int n;
int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;

    for(int x = 1; x <= MAX_A; x++) {
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] + arr[j] == 2 * x) {
                    cnt++;
                }
            }
        }
		
        ans = max(ans, cnt);
    }
    
    cout << ans;
    return 0;
}
