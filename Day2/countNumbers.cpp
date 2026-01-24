// You are given an integer N followed by n integers. Count how many of the given numbers are:
// Positive
// Negative
// Even
// Odd

//Zero is neither positive nor negative.
//Zero is considered an even number

#include <iostream>
using namespace std;

int main() {
    int N, i, even = 0, odd = 0, neg = 0, pos = 0;
    cin >> N;
    int num[N];


    for ( i = 0; i < N; i++)
    {
        cin >> num[i];
        if(num[i]%2 == 0)
            even++;
        else
            odd++;
        
        if(num[i] > 0)
            pos++;
        else if(num[i] < 0)
            neg++;
    }
    cout << " \neven : " << even << "\nodd: " << odd << "\nneg: "<< neg <<"\npos: "<<pos << endl;

    
    
    return 0;
}