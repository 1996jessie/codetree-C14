#include <iostream>

#define MAXN 10

using namespace std;

class Person{
    public:
        string name;
        string street_address;
        string region;
        Person(string name, string street_address, string region) {
            this->name = name;
            this->street_address = street_address;
            this->region = region;
        }
        Person(){}
};

Person people[MAXN];

int main(){
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string name, address, region;
        cin >> name >> address >> region;
        
        people[i] = Person(name, address, region);
    }
    
    int last_idx = 0;
    for(int i = 1; i < n; i++) {
        if(people[i].name > people[last_idx].name)
            last_idx = i;
    }

    cout << "name " << people[last_idx].name << endl;
    cout << "addr " << people[last_idx].street_address << endl;
    cout << "city " << people[last_idx].region << endl;
    return 0;
}
