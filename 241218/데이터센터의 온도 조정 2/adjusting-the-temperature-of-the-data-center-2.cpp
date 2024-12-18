#include <iostream>
#include <cstdlib>

#define MAX_N 1000
#define MAX_T 1000

using namespace std;

int n, c, g, h;
int ta[MAX_N], tb[MAX_N];

int SingleEfficiency(int low, int high, int t) {
    if(t < low) {
        return c;
    } else if(t <= high) {
        return g;
    } else {
        return h;
    }
}

int Performance(int t) {
    int total_efficiency = 0;
    for(int i = 0; i < n; i++) {
        total_efficiency += SingleEfficiency(ta[i], tb[i], t);
    }
    return total_efficiency;
}

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n >> c >> g >> h;
    
    for(int i = 0; i < n; i++) {
        cin >> ta[i] >> tb[i];
    }
    
    int max_out = 0;
    for(int t = 0; t <= MAX_T; t++) {
        max_out = max(max_out, Performance(t));
    }
    
    cout << max_out;
    return 0;
}
