#include <iostream>
#include <algorithm>

#define MAX_N 7

int n = 7;
int arr[MAX_N];

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int a = arr[0];
    int b = arr[1];
    int c = arr[n - 1] - a - b;

    cout << a << " " << b << " " << c;
    return 0;
}
