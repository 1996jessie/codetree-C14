#include <iostream>
#include <algorithm>

#define MAX_D 1000
#define MAX_N 50

using namespace std;

class Info1 {
public:
    int p, m, t;
    Info1(int p, int m, int t) {
        this->p = p;
        this->m = m;
        this->t = t;
    }
    Info1() {}
};

class Info2 {
public:
    int p, t;
    Info2(int p, int t) {
        this->p = p;
        this->t = t;
    }
    Info2() {}
};

Info1 info1[MAX_D];
Info2 info2[MAX_N];

int n, m, d, s;

int main() {
    // 여기에 코드를 작성해주세요
    cin >> n >> m >> d >> s;

    for(int i = 0; i < d; i++) {
        int p, m, t;
        cin >> p >> m >> t;
        info1[i] = Info1(p, m, t);
    }

    for(int i = 0; i < s; i++) {
        int p, t;
        cin >> p >> t;
        info2[i] = Info2(p, t);
    }

    int ans = 0;

    for(int i = 1; i <= m; i++) {
        int time[MAX_N + 1] = {};
        for(int j = 0; j < d; j++) {
            if(info1[j].m != i) {
                continue;
            }
            int person = info1[j].p;
            if(time[person] == 0) {
                time[person] = info1[j].t;
            }
            else if(time[person] > info1[j].t) {
                time[person] = info1[j].t;
            }
        }

        bool possible = true;

        for(int j = 0; j < s; j++) {
            int person = info2[j].p;
            if(time[person] == 0) {
                possible = false;
            }
            if(time[person] >= info2[j].t) {
                possible = false;
            }
        }

        int pill = 0;
        if(possible) {
            for(int j = 1; j <= n; j++) {
                if(time[j] != 0) {
                    pill++;
                }
            }
        }

        ans = max(ans, pill);
    }

    cout << ans;

    return 0;
}
