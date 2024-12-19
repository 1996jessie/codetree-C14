#include <iostream>

#define MAX_N 10
#define MAX_NUM 10000

using namespace std;

int n;
int a[MAX_N], b[MAX_N];

bool Satisfy(int x) {
    for(int i = 0; i < n; i++) {
        x *= 2;
        if(x < a[i] || x > b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for(int x = 1; x <= MAX_NUM; x++) {
        if(Satisfy(x)) {
            cout << x;
            break;
        }
    }
    return 0;
}
