#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    bool satisfied = true;
    
    for(int i = 1; i <= 5; i++) {
        int a;
        cin >> a;
        if(a % 3 != 0) {
            satisfied = false;
        }
    }

    if(satisfied == true) {
        cout << "1";
    } else {
        cout << "0";
    }
    
    return 0;
}