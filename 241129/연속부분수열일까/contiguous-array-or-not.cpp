#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[100];
    int arr2[100];

    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    for(int i = 0; i < n1; i++) {
        bool success = true;

        for(int j = 0; j < n2; j++) {
            if(i + j >= n1) {
                success = false;
                break;
            }

            if(arr1[i + j] != arr2[j]) {
                success = false;
                break;
            }
        }

        if(success) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";

    return 0;
}