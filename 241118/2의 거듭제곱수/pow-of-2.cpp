#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int prod = 1;
    int x = 0;

    while(1) {
        if(n == prod) {
            break;
        }

        prod *= 2;
        x++;
    }

    cout << x;

    return 0;
}