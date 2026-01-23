// You are given two integers N and M
// Your task is to find the sum of the last digits of N and M


#include <iostream>
using namespace std;

int main()
{
    int a = 45, b = 69;
    
    int rev1 = 0, num1 = 0, rev2 = 0, num2 = 0;
    while (a > 0 || b > 0)
    {
        num1 = a % 10;
        rev1 = rev1 + num1;
        a = a / 100;

        num2 = b % 10;
        rev2 = rev2 + num2;
        b = b / 100;
    }
    cout << "sum: " << rev1+rev2 << endl;
    return 0;
}