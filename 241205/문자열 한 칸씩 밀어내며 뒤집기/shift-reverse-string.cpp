#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string input_str;
int str_size;

int main() {
    // 여기에 코드를 작성해주세요.
    int q_num;
    cin >> input_str >> q_num;

    str_size = input_str.size();

    int q_type;
    for (int i = 0; i < q_num; i++) {
        cin >> q_type;
        
        if (q_type == 1) {
            int len = (int)input_str.size();
            input_str = input_str.substr(1, len) + input_str.substr(0, 1);
            cout << input_str << endl;
        }
        else if (q_type == 2) {
            int len = (int)input_str.size();
            input_str = input_str.substr(len - 1, len) + input_str.substr(0, len - 1);
            cout << input_str << endl;
        }
        else if (q_type == 3) {
            reverse(input_str.begin(), input_str.end());
            cout << input_str << endl;
        }
    }

    return 0;
}