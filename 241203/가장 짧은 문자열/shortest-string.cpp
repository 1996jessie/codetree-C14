#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    int len1 = str1.length();
    int len2 = str2.length();
    int len3 = str3.length();

    int mx = len1;
    if (mx < len2) { 
        mx = len2; 
    }
    if (mx < len3) { 
        mx = len3; 
    }

    int mn = len1;
    if (mn > len2) { 
        mn = len2; 
    }
    if (mn > len3) { 
        mn = len3; 
    }

    cout << mx - mn;

    return 0;
}