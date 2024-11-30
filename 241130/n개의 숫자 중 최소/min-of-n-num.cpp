#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int A[100], n, min, cnt;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    min = A[0];
    cnt = 1;

    for (int i = 1; i < n; i++) {
        if (min > A[i]) {
            min = A[i];
            cnt = 1;
        } else if (min == A[i]) {
            cnt++;
        }
    }

    cout << min << " " << cnt;
    return 0;
}