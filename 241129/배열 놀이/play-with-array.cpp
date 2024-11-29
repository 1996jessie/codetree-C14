#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, q;
    cin >> n >> q;
    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < q; i++) {
        int q_type;
        cin >> q_type;

        if(q_type == 1) {
            int a;
            cin >> a;
            cout << arr[a - 1] << endl;
        } else if(q_type == 2) {
            int a;
            cin >> a;
            int idx = -1;
            for(int j = 0; j < n; j++) {
                if(arr[j] == a) {
                    idx = j;
                    break;
                }
            }
            cout << idx + 1 << endl;
        } else {
            int a, b;
            cin >> a >> b;
            for(int j = a - 1; j < b; j++) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}