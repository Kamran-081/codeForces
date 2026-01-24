// Print the sum of digits of N
#include <iostream>
using namespace std;

int main()
{
    int n = 543, sum = 0;
    while (n > 0)
    {
        int rev = n % 10;
        sum += rev;
        n /= 10;
    }
    cout << sum << endl;

    return 0;
}