#include <iostream>
#include <climits>

#define MAX_N 100

using namespace std;

int n;
int x[MAX_N], y[MAX_N];

int dist(int i, int j) {
    return (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
}

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int min_dist = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            min_dist = min(min_dist, dist(i, j));
        }
    }
    
    cout << min_dist;
    return 0;
}
