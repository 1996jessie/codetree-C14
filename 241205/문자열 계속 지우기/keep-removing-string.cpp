#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A, B;
    cin >> A;
    cin >> B;

    while (A.find(B) != string::npos) {
        int start_pos = A.find(B);
        A.erase(start_pos, B.length());
    }

    cout << A;
    return 0;
}