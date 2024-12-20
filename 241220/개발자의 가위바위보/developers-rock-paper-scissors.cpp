#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n;
int a[MAX_N], b[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int max_win = 0;

    int win = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 1 && b[i] == 2) {
            win++;
        } else if(a[i] == 2 && b[i] == 3) {
            win++;
        } else if(a[i] == 3 && b[i] == 1) {
            win++;
        }
    }
    max_win = max(max_win, win);

    win = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 1 && b[i] == 3) {
            win++;
        } else if(a[i] == 3 && b[i] == 2) {
            win++;
        } else if(a[i] == 2 && b[i] == 1) {
            win++;
        }
    }
    max_win = max(max_win, win);

    cout << max_win;

    return 0;
}
