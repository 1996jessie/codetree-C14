#include <iostream>

using namespace std;

void PrintStar(int n) {
    if (n == 0) {
        return;
    }

    cout << n << " ";
    PrintStar(n - 1);
    cout << n << " ";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    PrintStar(n);

    return 0;
}