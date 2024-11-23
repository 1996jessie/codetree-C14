#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    for(int first = 1; first <= 19; first++) {
        for(int second = 1; second <= 19; second++) {
            if(second % 2 == 1) {
                cout << first << " * " << second << " = " << first * second;
            } else {
                cout << " / " << first << " * " << second << " = " << first * second << endl;
            }

            if(second == 19) {
                cout << endl;
            }
        }
    }
    return 0;
}