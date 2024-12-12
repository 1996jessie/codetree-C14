#include <iostream>
#include <algorithm>

#define MAX_NUM 1000

using namespace std;

// 클래스 선언: 
class Number{
    public:
        int number;
        int index;
        Number(int number, int index) {
            this->number = number;
            this->index = index;
        }
		Number(){}
};

bool Cmp(Number a, Number b) {
    if(a.number != b.number) {
        return a.number < b.number;
    }
    return a.index < b.index;
}

Number numbers[MAX_NUM];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num_cache;
    int answer[MAX_NUM];

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num_cache;
        numbers[i] = Number(num_cache, i);
    }

    sort(numbers, numbers + n, Cmp);

    for(int i = 0; i < n; i++) {
        answer[numbers[i].index] = i + 1;
    }

    for(int i = 0; i < n; i++){
        cout << answer[i] << " ";
    }

    return 0;
}