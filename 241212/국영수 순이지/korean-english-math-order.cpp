#include <iostream>
#include <algorithm>
#include <string>

#define MAXN 10

using namespace std;

class Student{
    public:
        string name;
        int korean;
        int english;
        int math;
        Student(string name, int korean, int english, int math) {
            this->name = name;
            this->korean = korean;
            this->english = english;
            this->math = math;
        }
		Student(){}
};

bool Cmp(Student a, Student b) {
    if(a.korean != b.korean) {
        return a.korean > b.korean;
    }
    if(a.english != b.english) {
        return a.english > b.english;
    }
    return a.math > b.math;
}

Student students[MAXN];
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string name;
        int korean, english, math;
        cin >> name >> korean >> english >> math;
        students[i] = Student(name, korean, english, math);
    }

    sort(students, students + n, Cmp);

    for (int i = 0; i < n; i++){
        cout << students[i].name << " ";
        cout << students[i].korean << " ";
        cout << students[i].english << " ";
        cout << students[i].math << endl;
    }

    return 0;
}