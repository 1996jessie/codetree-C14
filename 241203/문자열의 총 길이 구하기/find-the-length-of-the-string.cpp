#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[10];
    int len_all = 0;
    
    for (int i = 0; i < 10; i++) {
        cin >> str[i];
    }
    
    for (int i = 0; i < 10; i++) {
        len_all += str[i].length();
    }

    cout << len_all;

    return 0;
}