#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int answer[10][10] = {};
    cin >> n;

    int count = 1;
    for (int col = n - 1; col >= 0; col--) {
        if ((n - 1 - col) % 2 == 0) {
            for (int row = n - 1; row >= 0; row--) {
                answer[row][col] = count;
                count++;
            }
        } else {
            for (int row = 0; row < n; row++) {
                answer[row][col] = count;
                count++;
            }
        }
    }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cout << answer[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}