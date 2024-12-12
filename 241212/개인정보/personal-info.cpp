#include <iostream>
#include <algorithm>
#include <string>

#define MAXN 5

using namespace std;

class Student{
    public:
        string name;
        int height;
        double weight;
        Student(string name, int height, double weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
		Student(){}
};

bool Cmp1(Student a, Student b) {
    return a.name < b.name;
}

bool Cmp2(Student a, Student b) {
    return a.height > b.height;
}

Student students[MAXN];

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < MAXN; i++){
        string name;
        int height;
		double weight;
        cin >> name >> height >> weight;
		students[i] = Student(name, height, weight);
    }
	
	cout << fixed;
	cout.precision(1);

    sort(students, students + MAXN, Cmp1);

	cout << "name" << endl;
    for (int i = 0; i < MAXN; i++){
        cout << students[i].name << " ";
        cout << students[i].height << " ";
        cout << students[i].weight << endl;
    }
	
	cout << endl;
	
    sort(students, students + MAXN, Cmp2);

	cout << "height" << endl;
    for (int i = 0; i < MAXN; i++){
        cout << students[i].name << " ";
        cout << students[i].height << " ";
        cout << students[i].weight << endl;
    }

    return 0;
}