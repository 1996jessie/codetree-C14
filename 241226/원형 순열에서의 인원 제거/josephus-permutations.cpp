#include <iostream>
#include <queue>

using namespace std;

int n, k;
queue<int> q;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        q.push(i + 1);
    }

    while(q.size() != 1) {
        for(int i = 0; i < k - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }
    cout << q.front();

    return 0;
}
