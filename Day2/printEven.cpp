// You are given an integer N. Print all even numbers between 1 and N
//  (inclusive) in increasing order

#include <iostream>
using namespace std;

int main() {
    int N, i = 1;
    cout << "enter value N: " << endl;
    cin>>N;
    while( i <= N) {
        if (i % 2 == 0) {
            cout << i <<" ";
        }
        i++;
    }
    return 0;
}