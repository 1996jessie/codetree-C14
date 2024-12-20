#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>

using namespace std;

int a, b, x, y;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a >> b >> x >> y;

    int min_dist = INT_MAX;

    if (true) {
        min_dist = min(min_dist, abs(b - a));
    }

    if (true) {
        min_dist = min(min_dist, abs(x - a) + 0 + abs(b - y));
    }

    if (true) {
        min_dist = min(min_dist, abs(y - a) + 0 + abs(b - x));
    }

    cout << min_dist;
    return 0;
}
