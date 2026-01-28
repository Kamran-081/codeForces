// 0
// 10
// 010
// 1010
// 01010
// 101010

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int digit = (i % 2 == 1) ? 0 : 1;

        for (int j = 1; j <= i; j++) {
            cout << digit;
            digit = 1 - digit;
        }
        cout << endl;
    }
    return 0;
}
