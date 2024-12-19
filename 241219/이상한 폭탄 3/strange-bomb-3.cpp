#include <iostream>

#define MAX_N 100
#define MAX_A 1000000

using namespace std;

int n, k;
int num[MAX_N];
int bomb[MAX_A + 1];
bool explode[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }

    int maxval = 1;
    int maxidx = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(j - i > k) {
                break;
            }

            if(num[i] != num[j]) {
                continue;
            }

            if(explode[i] == false) {
                bomb[num[i]]++;
                explode[i] = true;
            }

            if(explode[j] == false) {
                bomb[num[j]]++;
                explode[j] = true;
            }
        }
    }

    for(int i = 0; i <= MAX_A; i++) {
        if(maxval <= bomb[i]) {
            maxval = bomb[i];
            maxidx = i;
        }
    }

    cout << maxidx;

    return 0;
}
