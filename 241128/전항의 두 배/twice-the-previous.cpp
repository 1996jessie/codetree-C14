#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int p1, p2;
    cin >> p1 >> p2;

    int arr[10] = {p1, p2};

    for(int i = 2; i < 10; i++) {
        arr[i] = 2 * arr[i - 2] + arr[i - 1];
    }

    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}