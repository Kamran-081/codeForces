#include <iostream>
using namespace std;

int main() {
    int n = 5, i, j;

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        for (j = 1; j <= 2 * (n - i) + 1; j++) {
            cout << " ";
        }
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (i = 2; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        for (j = 1; j <= 2 * (n - i) + 1; j++) {
            cout << " ";
        }
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
