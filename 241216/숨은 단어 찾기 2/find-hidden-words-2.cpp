#include <iostream>
#include <algorithm>
#include <string>

#define MAX_N 100
#define DIR_NUM 8

using namespace std;

int n, m;
string arr[MAX_N];

int dx[DIR_NUM] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[DIR_NUM] = {-1, 0, 1, -1, 0, 1, -1, 1};

int InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] != 'L') {
                continue;
            }

            for (int k = 0; k < DIR_NUM; k++) {
                int curt = 1;
                int curx = i;
                int cury = j;
                while (true) {
                    int nx = curx + dx[k];
                    int ny = cury + dy[k];
                    if (InRange(nx, ny) == false) {
                        break;
                    }
                    if (arr[nx][ny] != 'E') {
                        break;
                    }
                    curt++;
                    curx = nx;
                    cury = ny;
                }
                if (curt >= 3) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}
