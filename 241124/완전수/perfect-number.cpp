#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end;
    int answer_cnt = 0;
    cin >> start >> end;

    for(int curr_num = start; curr_num <= end; curr_num++) {
        int divisor_sum = 0;
        for(int divisor = 1; divisor <= curr_num - 1; divisor++) {
            if(curr_num % divisor == 0) {
                divisor_sum += divisor;
            }
        }
        if(divisor_sum == curr_num) {
            answer_cnt++;
        }
    }

    cout << answer_cnt;
    return 0;
}