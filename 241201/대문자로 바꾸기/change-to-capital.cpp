#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char arr_2d[5][3];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr_2d[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            arr_2d[i][j] += 'A' - 'a';
            cout << arr_2d[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}