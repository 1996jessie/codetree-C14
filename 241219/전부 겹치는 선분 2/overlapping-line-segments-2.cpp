#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100

using namespace std;

int n;
int x1[MAX_N], x2[MAX_N];
bool ans = false;

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    
    for(int skip = 0; skip < n; skip++) {
        int max_x1 = 0;
        int min_x2 = INT_MAX;
        bool possible = false;
        for(int i = 0; i < n; i++) {
            if(i == skip) continue;
            max_x1 = max(max_x1, x1[i]);
            min_x2 = min(min_x2, x2[i]);
        }
        if(min_x2 >= max_x1) {
            possible = true;
        } else {
            possible = false;
        }
        if(possible) {
            ans = true;
        }
    }

    if(ans) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
