#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c, d;

bool Intersecting(int x1, int x2, int x3, int x4) {
    if(x2 < x3 || x4 < x1) {
        return false;
    } else {
        return true;
    }
}

int main() {
    cin >> a >> b >> c >> d;
    if(Intersecting(a, b, c, d)) {
        cout << max(b, d) - min(a, c);
    } else {
        cout << (b - a) + (d - c);
    }
    return 0;
}
