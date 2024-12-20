#include <iostream>
#include <algorithm>

#define MAX_N 3

using namespace std;

int n = 3;
int a[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(a[0] + 1 == a[1] && a[1] + 1 == a[2]) {
        cout << 0;
        return 0;
    }
    
    int max_move = 0;
    int move = a[2] - a[1] - 1;
    max_move = max(max_move, move);

    move = a[1] - a[0] - 1;
    max_move = max(max_move, move);

    cout << max_move;

    return 0;
}
