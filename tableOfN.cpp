// You are given an integer N
// . Your task is to print the multiplication table of N
//  from 1
//  to 10


#include <iostream>
using namespace std;
int n = 3;

int main() {
    int a = 0, i = 1 ;
    while( i <= 10) {
        a += n;
        cout << n <<" * "<< i << " = " << a << endl;
        i++;
    }
    return 0;
}