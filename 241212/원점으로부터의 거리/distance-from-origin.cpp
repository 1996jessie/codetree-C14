#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>

#define MAXN 1000

using namespace std;

int GetDistFromOrigin(int x, int y) {
    return abs(x) + abs(y);
}

pair<int, int> distances[MAXN];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
	
    int x, y;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        distances[i] = make_pair(GetDistFromOrigin(x, y), i + 1);
    }

    sort(distances, distances + n);

    for(int i = 0; i < n; i++) {
        cout << distances[i].second << endl;
    }

    return 0;
}