#include <iostream>
#include <string>

#define MAX_N 100
#define DIR_NUM 4

using namespace std;

int n, m;
int arr[MAX_N][MAX_N];

int dx[DIR_NUM] = {0, 1,  0, -1};
int dy[DIR_NUM] = {1, 0, -1,  0};

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int AdjacentCnt(int x, int y) {
    int cnt = 0;
    for(int i = 0; i < DIR_NUM; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(InRange(nx, ny) && arr[nx][ny] == 1) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        arr[x][y] = 1;
        if(AdjacentCnt(x, y) == 3) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
