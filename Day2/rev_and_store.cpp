// Reverse the digits of N
//  and store the result in a variable.

#include <iostream>
using namespace std;

int main() {
    int digit = 0, revNum = 0;
     int n = 765;
     while(n>0) {
         digit = n % 10;
         revNum = revNum * 10 + digit; 
         n /= 10;
     }

    cout << revNum;
    
    return 0;
}