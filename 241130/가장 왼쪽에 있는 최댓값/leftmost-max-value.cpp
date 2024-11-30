#include <iostream>
using namespace std;

#define MAX_N 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a[MAX_N];
    int indices[MAX_N];
    int cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    indices[cnt++] = 0;

    for(int i = 1; i < n; i++) {
        int last_idx = indices[cnt - 1];
        if(a[i] > a[last_idx]) {
            indices[cnt++] = i;
        }
    }

    for(int i = cnt - 1; i >= 0; i--) {
        int idx = indices[i];
        cout << idx + 1 << " ";
    }

    return 0;
}