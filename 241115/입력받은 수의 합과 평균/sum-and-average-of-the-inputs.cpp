#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        int score;
        cin >> score;
        sum += score;
    }
    
    double avg = (double)sum / n;
    
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}