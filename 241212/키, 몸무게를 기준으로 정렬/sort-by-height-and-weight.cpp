#include <iostream>
#include <algorithm>
#include <string>

#define MAXN 10

using namespace std;

class Student{
    public:
        string name;
        int height;
        int weight;
        Student(string name, int height, int weight) {
            this->name = name;
            this->height = height;
			this->weight = weight;
        }
		Student(){}
};

bool Cmp(Student a, Student b) {
    if(a.height != b.height) {
        return a.height < b.height;
    }
    return a.weight > b.weight;
}

Student students[MAXN];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        students[i] = Student(name, height, weight);
    }

    sort(students, students + n, Cmp);

    for (int i = 0; i < n; i++){
        cout << students[i].name << " ";
        cout << students[i].height << " ";
        cout << students[i].weight << endl;
    }

    return 0;
}