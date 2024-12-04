#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char a;
    cin >> str;
    cin >> a;

    int start_idx = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == a) {
            start_idx = i;
            break;
        }
    }

    if (start_idx == -1) {
        cout << "No";
    } else {
        cout << start_idx;
    }
    
    return 0;
}