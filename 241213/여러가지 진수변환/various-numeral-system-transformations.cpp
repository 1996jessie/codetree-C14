#include <iostream>
#include <algorithm>

#define MAX_DIGIT 20

using namespace std;

int n, b;
int digits[MAX_DIGIT];
int cnt;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> b;
    
    while(true) {
        if(n < b) {
            digits[cnt++] = n;
            break;
        }
        
        digits[cnt++] = n % b;
        n /= b;
    }
    
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];
    
    return 0;
}
