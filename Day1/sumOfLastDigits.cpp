// You are given two integers N and M
// Your task is to find the sum of the last digits of N and M


#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N = -45, M = 69;

    int lastN = abs(N % 10);
    int lastM = abs(M % 10);

    cout << "Sum: " << lastN + lastM << endl;
    return 0;
}
