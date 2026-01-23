// Print the following pattern exactly as shown:


// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;

int main()
{
    int i, j;
    for( i = 0; i <= 4; i++)
    {
        for( j = 4-i; j >= 0; j--)
        {
            cout <<"*" ;
        }
        cout << "\n";
    }
return 0;
}

