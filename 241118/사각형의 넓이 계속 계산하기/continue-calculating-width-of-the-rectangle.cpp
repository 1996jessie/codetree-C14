#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    while(1) {
        int w, h;
        char a;
        cin >> w >> h >> a;

        cout << w * h << endl;

        if(a == 'C') {
            break;
        }
    }

    return 0;
}