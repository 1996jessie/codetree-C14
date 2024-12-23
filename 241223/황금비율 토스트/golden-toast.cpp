#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    string s;

    cin >> n >> m;
    cin >> s;

    list<char> l;
    for(int i = 0; i < s.length(); i++) {
        l.push_back(s[i]);
    }

    list<char>::iterator it = l.end();

    while(m--) {
        char command;
        cin >> command;

        if(command == 'L') {
            if(it != l.begin()) {
                it--;
            }
        } else if(command == 'R') {
            if(it != l.end()) {
                it++;
            }
        } else if(command == 'D') {
            if(it != l.end()) {
                it = l.erase(it);
            }
        } else if(command == 'P') {
            char c;
            cin >> c;
            l.insert(it, c);
        }
    }

    for(list<char>::iterator it = l.begin(); it != l.end(); it++) {
        cout << *it;
    }

    return 0;
}
