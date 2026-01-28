
// * * * * * * * 
//  *         * 
//   *       * 
//    *     * 
//     *   * 
//      * * 
//       * 

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s < i; s++)
            cout << " ";

        if (i == 1) {
            for (int j = 1; j <= 2*n - 1; j++)
                cout << "* ";
        } else if (i == n) {
            cout << "*";
        } else {
            cout << "*";
            for (int j = 1; j <= 2*(n - i) - 1; j++)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
