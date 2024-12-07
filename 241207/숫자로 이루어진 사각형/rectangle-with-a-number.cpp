#include <iostream>

using namespace std;

void PrintNum(int n) {
    int cnt = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << cnt << " ";
            cnt++;
            if(cnt == 10) {
                cnt = 1;
            }
        }
        cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int row_num;
    cin >> row_num;

    PrintNum(row_num);

    return 0;
}