#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    int weight;
    double percent;
    weight = 13;
    percent = 0.165;
    cout.precision(6);
    cout << weight << " * " << percent << " = " << weight * percent;
    return 0;
}