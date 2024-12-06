#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    string b;
    string str1;
    string str2;

    cin >> a >> b;

    str1 = a + b;
    str2 = b + a;

    int str1_int = stoi(str1);
    int str2_int = stoi(str2);

    cout << str1_int + str2_int;

    return 0;
}