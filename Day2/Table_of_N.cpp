// You are given an integer N. Your task is to print the multiplication table of N
 // from 1 to 10

// Input a single integer N(1≤N≤100)


#include <iostream>
using namespace std;

int main() {
    int i, n;
    cout << "Enter value of n: " << endl;
    cin >> n;

    for ( i = 1; i <= 10; i++)
    {
        
        cout << n << " * "<< i << " = " << n*i << endl;
    }
    
    return 0;
}