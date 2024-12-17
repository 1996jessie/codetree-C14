#include <iostream>

#define MAX_N 20
#define MAX_K 10

using namespace std;

int k, n;
int arr[MAX_K][MAX_N];

int main() {
    // 여기에 코드를 작성해주세요
    cin >> k >> n;
    
    for(int i = 0; i < k; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) {
                continue;
            }

            bool correct = true;

            for(int x = 0; x < k; x++) {
                int index_i = 0, index_j = 0;

                for(int y = 0; y < n; y++) {
                    if(arr[x][y] == i) {
                        index_i = y;
                    }
                    if(arr[x][y] == j) {
                        index_j = y;
                    }
                }

                if(index_i > index_j) {
                    correct = false;
                }
            }

            if(correct) {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}
