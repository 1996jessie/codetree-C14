#include <iostream>

using namespace std;

int x1, x2, x3, x4;

bool Intersecting(int x1, int x2, int x3, int x4) {
    if(x2 < x3 || x4 < x1) {
        return false;
    } else {
        return true;
    }
}

int main() {
    cin >> x1 >> x2 >> x3 >> x4;
    if(Intersecting(x1, x2, x3, x4)) {
        cout << "intersecting";
    } else {
        cout << "nonintersecting";
    }
    return 0;
}
