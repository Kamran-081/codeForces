//Print YES if the number is a palindrome, otherwise print NO.

#include <iostream>
using namespace std;

int main() {
    int a , digit = 0, rev = 0;
    cout << "enter any integer: ";
    cin >> a;

    int temp = a;

    while(a > 0) {
        digit = a % 10;
        rev = rev * 10 + digit;
        a /= 10;
    }
    
    if(rev == temp)
        cout << "yes";
    else
        cout << "no";
    return 0;
}