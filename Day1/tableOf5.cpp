#include <iostream>
using namespace std;

int main() {
    int a = 0, i = 1 ;
    while( i <= 10) {
        a += 5;
        cout << "5 * "<< i << " = " << a << endl;
        i++;
    }
    return 0;
}
