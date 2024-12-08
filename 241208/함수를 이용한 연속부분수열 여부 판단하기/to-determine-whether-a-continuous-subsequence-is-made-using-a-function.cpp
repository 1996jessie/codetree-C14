#include <iostream>

#define MAX_N 100

using namespace std;

int n1, n2;
int a[MAX_N], b[MAX_N];

bool IsSame(int n) {
    for (int i = 0; i < n2; i++) {
        if (a[i + n] != b[i]) {
            return false;
        }
    }
    return true;
}

bool IsSubsequence() {
    for (int i = 0; i <= n1 - n2; i++) {
        if (IsSame(i)) {
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    if (IsSubsequence()) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}