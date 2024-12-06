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

    int len_a = a.length();
    int len_b = b.length();

    for(int i = 0; i < len_a; i++) {
        if(a[i] >= '0' && a[i] <= '9') {
            str1 += a[i];
        }
    }

    for(int i = 0; i < len_b; i++) {
        if(b[i] >= '0' && b[i] <= '9') {
            str2 += b[i];
        }
    }

    int str1_int = stoi(str1);
    int str2_int = stoi(str2);

    printf("%d", str1_int + str2_int);

    return 0;
}