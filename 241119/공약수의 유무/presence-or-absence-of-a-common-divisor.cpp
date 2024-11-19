#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    bool satisfied = false;
    
    for(int i = a; i <= b; i++) {
        if(1920 % i == 0 && 2880 % i == 0) {
            satisfied = true;
        }
    }

    if(satisfied == true) {
        cout << "1";
    } else {
        cout << "0";
    }
    
    return 0;
}