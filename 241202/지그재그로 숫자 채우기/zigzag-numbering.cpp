#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    int answer[100][100] = {0};

    cin >> n >> m;

    int count = 0;
    for (int col = 0; col < m; col++) {
        if (col % 2 == 0) {
            for (int row = 0; row < n; row++) {
                answer[row][col] = count++;
            }
        } else {
            for (int row = n - 1; row >= 0; row--) {
                answer[row][col] = count++;
            }
        }
    }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cout << answer[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}