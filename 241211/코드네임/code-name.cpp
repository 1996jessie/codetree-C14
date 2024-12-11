#include <iostream>

#define MAX_N 5

using namespace std;

class User{
    public:
        char code_name;
        int score;
        User(char code_name, int score) {
            this->code_name = code_name;
            this->score = score;
        }
        User(){}
};

User users[MAX_N];

int main(){
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < MAX_N; i++) {
        char code_name;
        int score;
        cin >> code_name >> score;
        
        users[i] = User(code_name, score);
    }
    
    int min_idx = 0;
    for(int i = 1; i < MAX_N; i++) {
        if(users[min_idx].score > users[i].score) {
            min_idx = i;
        }
    }

    cout << users[min_idx].code_name << " " << users[min_idx].score;
    return 0;
}
