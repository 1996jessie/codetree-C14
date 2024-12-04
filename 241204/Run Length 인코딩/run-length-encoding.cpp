#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    string encoded = "";

    char curr_char = A[0];
    int num_char = 1;

    for(int i = 1; i < A.length(); i++) {
        if(A[i] == curr_char) {
            num_char++;
        } else {
            encoded += curr_char;
            encoded += to_string(num_char);
            curr_char = A[i];
            num_char = 1;
        }
    }

    encoded += curr_char;
    encoded += to_string(num_char);

    cout << encoded.length() << endl << encoded;
    return 0;
}