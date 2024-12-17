#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

int n, b;
int p[MAX_N];
int s[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n >> b;

    for(int i = 0; i < n; i++) {
        cin >> p[i] >> s[i];
    }

    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        int tmp[MAX_N] = {};
        for(int j = 0; j < n; j++) {
            tmp[j] = p[j] + s[j];
        }
        tmp[i] = p[i] / 2 + s[i];

        sort(tmp, tmp + n);

        int student = 0;
        int cnt = 0;

        for(int j = 0; j < n; j++) {
            if(cnt + tmp[j] > b) {
                break;
            }
            cnt += tmp[j];
            student++;
        }

        ans = max(ans, student);
    }

    cout << ans;

    return 0;
}
