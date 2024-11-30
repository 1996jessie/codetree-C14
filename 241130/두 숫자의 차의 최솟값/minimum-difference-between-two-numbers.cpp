#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int A[10], n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int min_val = A[1] - A[0];

    for (int i = 2; i < n; i++) {
        if (min_val > A[i] - A[i - 1]) {
            min_val = A[i] - A[i - 1];
        }
    }

    cout << min_val;
    return 0;
}