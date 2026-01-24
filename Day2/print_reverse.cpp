// Print the number formed by reversing the digits of N


// Print the sum of digits of N
#include <iostream>
using namespace std;

int main()
{
    int n = 543;
    while (n > 0)
    {
        int rev = n % 10;
        n /= 10;
        cout << rev;
    }

    return 0;
}