#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a, b;
    cin >> a >> b;

    int a_num = (int)a;
    int b_num = (int)b;

    cout << a_num + b_num << " ";

    if (a_num > b_num) {
        cout << a_num - b_num;
    } else {
        cout << b_num - a_num;
    }

    return 0;
}