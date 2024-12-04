#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    int idx = str.length() - 1;
    if(idx % 2 == 0) {
        idx--;
    }

    for(int i = idx; i >= 0; i -= 2) {
        cout << str[i];
    }
    
    return 0;
}