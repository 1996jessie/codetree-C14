#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    while(1) {
        int n;
        cin >> n;
        
        if(n == 1) {
            cout << "John" << endl;
        }
        else if(n == 2) {
            cout << "Tom" << endl;
        }
        else if(n == 3) {
            cout << "Paul" << endl;
        }
        else if(n == 4) {
            cout << "Sam" << endl;
        }
        else {
            cout << "Vacancy" << endl;
            break;
        }
    }

    return 0;
}