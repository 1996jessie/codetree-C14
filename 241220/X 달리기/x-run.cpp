#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요
    int x;
    cin >> x;

    int t = 0;
    int left_dist = x;
    int v = 1;

    while(true) {
        left_dist -= v;
        t++;

        if(left_dist == 0) {
            break;
        }

        if(left_dist >= (v + 1) * (v + 2) / 2) {
            v++;
        } else if(left_dist >= v * (v + 1) / 2) {
        } else {
            v--;
        }
    }
    
    cout << t;
    return 0;
}
