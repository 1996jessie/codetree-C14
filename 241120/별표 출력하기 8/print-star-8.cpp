#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            cout << "*";
        }
        else {
            for(int k = 0; k < i + 1; k++) {
                cout << "* ";
            }
        }
        cout << "\n";
    }

    return 0;
}