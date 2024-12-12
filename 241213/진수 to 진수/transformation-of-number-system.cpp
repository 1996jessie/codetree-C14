#include <iostream>
#include <algorithm>

#define MAX_DIGIT 30

using namespace std;

int a, b;
string n;
int digits[MAX_DIGIT];
int cnt;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a >> b;
    cin >> n;
    
    int num = 0;
    for (int i = 0; i < (int) n.size(); i++) {
        num = num * a + (n[i] - '0');
    }
    
    while (true) {
        if (num < b) {
            digits[cnt++] = num;
            break;
        }
        digits[cnt++] = num % b;
        num /= b;
    }
    
    for (int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }
    
    return 0;
}
