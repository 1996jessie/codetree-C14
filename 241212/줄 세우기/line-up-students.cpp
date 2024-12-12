#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
	vector<tuple<int, int, int> > students;
	
	cin >> n;
	for(int i = 0; i < n; i++) {
		int h, w;
		cin >> h >> w;
		students.push_back(make_tuple(-h, -w, i + 1));
	}
	
	sort(students.begin(), students.end());
	
	for(int i = 0; i < n; i++) {
		int h, w, num;
		tie(h, w, num) = students[i];
		cout << -h << " " << -w << " " << num << endl;
	}
	return 0;
}