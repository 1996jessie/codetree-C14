#include <iostream>

using namespace std;

int NumOfDays(int m, int d) {
    int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;
    
    for(int i = 1; i < m; i++) {
        total_days += days[i];
    }
    
    total_days += d;
    
    return total_days;
}

int NumOfDay(string s) {
    if(s == "Mon") {
        return 0;
    } else if(s == "Tue") {
        return 1;
    } else if(s == "Wed") {
        return 2;
    } else if(s == "Thu") {
        return 3;
    } else if(s == "Fri") {
        return 4;
    } else if(s == "Sat") {
        return 5;
    }
    return 6;
}

int ans;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, m2, d1, d2;
    string A;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int start_date = NumOfDays(m1, d1);
    int end_date = NumOfDays(m2, d2);
    int cur_day = NumOfDay("Mon");

    for(int date = start_date; date <= end_date; date++) {
        if(cur_day == NumOfDay(A)) {
            ans++;
        }
        cur_day = (cur_day + 1) % 7;
    }
    
    cout << ans;
    return 0;
}