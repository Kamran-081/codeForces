//Print the value of x to power n
//take 2 numbers as input

#include <iostream>
using namespace std;

int main() {
    int x = 78,n=10;
    long long temp = 1;
    for (int i = 1; i < n; i++)
    {
       temp *= x;
    }

    cout << temp << endl;
    
    return 0;
}