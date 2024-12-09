#include <iostream>

#define MAX_N 100

using namespace std;

int arr[MAX_N + 1];
int cnt;

int GetAnswer(int a1, int a2) {
    int return_value = 0;
    for (int i = a1; i <= a2; i++) {
        return_value += arr[i];
    }

    return return_value;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        cout << GetAnswer(a1, a2) << endl;
    }
}