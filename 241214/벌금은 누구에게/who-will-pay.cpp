#include <iostream>

#define MAX_N 100
#define MAX_M 10000

using namespace std;

int n, m, k;
int penalized_person[MAX_M];
int penalty_num[MAX_N + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++) {
        cin >> penalized_person[i];
    }

    int ans = -1;
    for (int i = 0; i < m; i++) {
        int target = penalized_person[i];
        penalty_num[target]++;

        if (penalty_num[target] >= k) {
            ans = target;
            break;
        }
    }

    cout << ans;
    return 0;
}
