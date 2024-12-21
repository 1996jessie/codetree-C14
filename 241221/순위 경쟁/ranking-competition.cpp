#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n;
char name[MAX_N];
int value[MAX_N];
int score_a = 0, score_b = 0, score_c = 0;

int Status(int score1, int score2, int score3) {
    int return_val = 0;
    int maxval = max(score1, score2);
    maxval = max(maxval, score3);

    if(score1 == maxval) {
        return_val += 1;
    }
    if(score2 == maxval) {
        return_val += 2;
    }
    if(score3 == maxval) {
        return_val += 4;
    }
    
    return return_val;
}

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> name[i] >> value[i];
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(name[i] == 'A') {
            if(Status(score_a, score_b, score_c) != Status(score_a + value[i], score_b, score_c)) {
                ans++;
            }
            score_a += value[i];
        } else if(name[i] == 'B') {
            if(Status(score_a, score_b, score_c) != Status(score_a, score_b + value[i], score_c)) {
                ans++;
            }
            score_b += value[i];
        } else {
            if(Status(score_a, score_b, score_c) != Status(score_a, score_b, score_c + value[i])) {
                ans++;
            }
            score_c += value[i];
        }
    }

    cout << ans;
    return 0;
}
