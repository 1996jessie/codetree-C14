#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10][10] = {};

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int r, c;
        cin >> r >> c;
        arr[r][c] = i;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}