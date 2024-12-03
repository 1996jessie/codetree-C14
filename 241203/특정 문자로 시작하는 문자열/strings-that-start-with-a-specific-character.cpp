#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[20];
    char a;
    int len_sum = 0;
    int cnt = 0;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> str[i];

    cin >> a;
    
    for(int i = 0; i < n; i++) {
        if(str[i][0] == a) {
            int len = str[i].length();
            len_sum += len;
            cnt++;
        }
    }
  
    cout << fixed;
    cout.precision(2);
    cout << cnt << " " << (double)len_sum / cnt;
    
    return 0;
}