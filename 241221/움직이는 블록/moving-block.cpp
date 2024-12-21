#include <iostream>

#define MAX_N 10000

using namespace std;

int n;
int blocks[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> blocks[i];
    }
    
    int sum_of_blocks = 0;
    for(int i = 0; i < n; i++) {
        sum_of_blocks += blocks[i];
    }
    
    int avg = sum_of_blocks / n;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(blocks[i] > avg) {
            ans += blocks[i] - avg;
        }
    }

    cout << ans;
}
