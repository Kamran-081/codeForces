//you are given two integers L and R. Print all integers from L to R
//in increasing order.
// The first line contains two integers L and R (−105≤L≤R≤105).



#include <iostream>
using namespace std;

int main() {
    int i, N, L;
    cout << "enter value N and L: " << endl;
    cin >> N >> L;

    for ( i = N; i <= L; i++)
    {
        cout << i << " ";
    }
    
    return 0;
}