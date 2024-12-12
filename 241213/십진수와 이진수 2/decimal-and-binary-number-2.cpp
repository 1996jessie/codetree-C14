#include <iostream>
#include <algorithm>

#define MAX_DIGIT 20

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string binary;
    cin >> binary;
    
    int num = 0;
    for (int i = 0; i < (int) binary.size(); i++) {
        num = num * 2 + (binary[i] - '0');
    }
    
    num *= 17;
    
    int digits[MAX_DIGIT] = {};
    int cnt = 0;
    
    while (num > 0) {
        digits[cnt++] = num % 2;
        num /= 2;
    }
    
    for (int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }

    return 0;
}
