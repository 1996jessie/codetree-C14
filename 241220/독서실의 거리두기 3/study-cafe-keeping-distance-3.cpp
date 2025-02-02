#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int n;
string seats;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    cin >> seats;

    int max_dist = 0;
    int max_i, max_j;

    for(int i = 0; i < n; i++) {
        if(seats[i] == '1') {
            for(int j = i + 1; j < n; j++) {
                if(seats[j] == '1') {
                    if(j - i > max_dist) {
                        max_dist = j - i;
                        max_i = i;
                        max_j = j;
                    }
                    break;
                }
            }
        }
    }

    seats[(max_i + max_j) / 2] = '1';

    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(seats[i] == '1') {
            for(int j = i + 1; j < n; j++) {
                if(seats[j] == '1') {
                    ans = min(ans, j - i);
                    break;
                }
            }
        }
    }

    cout << ans;
    return 0;
}
