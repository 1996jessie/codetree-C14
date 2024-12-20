#include <iostream>

#define MAX_N 26

using namespace std;

int n;
char arr[MAX_N + 1];
int ans;

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++) {
        char x = 'A' + i - 1;

        int idx = 0;
        for(int j = 1; j <= n; j++) {
            if(arr[j] == x) {
                idx = j;
            }
        }

        for(int j = idx - 1; j >= i; j--) {
            swap(arr[j], arr[j + 1]);
            ans++;
        }
    }

    cout << ans;
    return 0;
}
