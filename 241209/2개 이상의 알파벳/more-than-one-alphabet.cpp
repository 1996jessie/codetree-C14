#include <iostream>
#include <string>

using namespace std;

bool IsMoreTwoalp(string str) {
    int len = str.length();
    for (int i = 0; i < len; i++) {
        if (str[i] != str[0]) {
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    if (IsMoreTwoalp(A)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}