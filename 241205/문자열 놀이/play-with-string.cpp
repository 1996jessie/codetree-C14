#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int q;

    cin >> str >> q;

    int len = str.length();

    for (int i = 0; i < q; i++) {
        int q_type;
        cin >> q_type;

        if (q_type == 1) {
            int a, b;
            cin >> a >> b;

            char tmp = str[b - 1];
            str[b - 1] = str[a - 1];
            str[a - 1] = tmp;

            cout << str << endl;
        } else {
            char a, b;
            cin >> a >> b;

            for (int j = 0; j < len; j++) {
                if (str[j] == a) {
                    str[j] = b;
                }
            }

            cout << str << endl;
        }
    }

    return 0;
}