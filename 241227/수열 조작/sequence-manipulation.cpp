#include <iostream>
#include <deque>

using namespace std;

int n;
deque<int> q;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        q.push_back(i + 1);
    }

    while(q.size() > 1) {
        q.pop_front();
        q.push_back(q.front());
        q.pop_front();
    }

    cout << q.front();
    return 0;
}
