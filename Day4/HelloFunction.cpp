// You are given an integer N
// Write a function that takes N  as a parameter and prints the string I am learning functions exactly N times, each on a new line.

// Input
// The only line contains an integer N (1≤N≤1000

// Output
// Print N lines. Each line must be exactly:
// I am learning functions


#include <iostream>
using namespace std;

void printMessage(int N) {
    for(int i = 0; i < N; i++) {
        cout << "I am learning functions" << endl;
    }
}

int main() {
    int N;
    cin >> N;
    printMessage(N);
    return 0;
}
