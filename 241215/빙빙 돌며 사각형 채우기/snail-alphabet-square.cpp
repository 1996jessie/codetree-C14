#include <iostream>

using namespace std;

bool visited[100][100] = {0};

bool CanGo(int n, int m, int new_x, int new_y) {
    if (0 <= new_x && new_x < n && 0 <= new_y && new_y < m && visited[new_x][new_y] == false) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    char answer[100][100] = {0};
    cin >> n >> m;

    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int curr_x = 0, curr_y = 0;
    int direction = 0;
    answer[curr_x][curr_y] = 'A';
    visited[curr_x][curr_y] = true;

    for (int i = 1; i < n * m; i++) {
        while (true) {
            int next_x = curr_x + dx[direction];
            int next_y = curr_y + dy[direction];
            if (CanGo(n, m, next_x, next_y)) {
                curr_x = next_x;
                curr_y = next_y;
                visited[curr_x][curr_y] = true;
                answer[curr_x][curr_y] = (char)(i % 26 + 'A');
                break;
            } else {
                direction = (direction + 1) % 4;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
