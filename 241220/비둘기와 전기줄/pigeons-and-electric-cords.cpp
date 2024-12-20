#include <iostream>

#define MAX_N 100
#define MAX_NUM 10
#define UNDEFINED -1

using namespace std;

int n;
int pigeon[MAX_N + 1], move_dir[MAX_N + 1];
int pos[MAX_NUM + 1];

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> pigeon[i] >> move_dir[i];
    }

    for(int i = 1; i <= MAX_NUM; i++) {
        pos[i] = UNDEFINED;
    }
    
    int move_cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(pos[pigeon[i]] == UNDEFINED) {
            pos[pigeon[i]] = move_dir[i];
        } else if(pos[pigeon[i]] != move_dir[i]) {
            pos[pigeon[i]] = move_dir[i];
            move_cnt++;
        }
    }

    cout << move_cnt;
    return 0;
}
