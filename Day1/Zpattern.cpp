// Print the following pattern exactly as shown:


// *****
//    *
//   *
//  *
// ***** 


#include <iostream>
using namespace std;

int main() {
    int i, j;


    for (j = 0; j < 5; j++)
        cout << "*";
    cout << endl;

    for (i = 1; i <= 3; i++) {
        for (j = 0; j < 5 - i - 1; j++)
            cout << " ";
        cout << "*" << endl;
    }


    for (j = 0; j < 5; j++)
        cout << "*";

    return 0;
}
