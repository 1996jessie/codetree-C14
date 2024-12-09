#include <iostream>

#define MAX_N 50

using namespace std;

int n;
int arr[MAX_N];

void AbsoluteValue(int *arr) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }
    return;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    AbsoluteValue(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}