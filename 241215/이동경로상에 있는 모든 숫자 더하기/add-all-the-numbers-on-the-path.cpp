#include <iostream>
#include <string>

#define DIR_NUM 4
#define MAX_N 100

using namespace std;

int n, t;
int x, y, dir;
int ans;
string str;
int board[MAX_N][MAX_N];

int dx[DIR_NUM] = {-1, 0, 1,  0};
int dy[DIR_NUM] = {0, 1,  0, -1};

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

void Simulate() {
    for(int i = 0; i < t; i++) {
        if(str[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        else if(str[i] == 'L') {
            dir = (dir + 3) % 4;
        }
        else {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if(InRange(nx, ny)) {
                ans += board[nx][ny];
                x = nx;
                y = ny;
            }
        }
    }
}

int main() {
    cin >> n >> t;
    cin >> str;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    
    x = n / 2;
    y = n / 2;
    dir = 0;

    ans += board[x][y];
    
    Simulate();
    
    cout << ans;
    return 0;
}
