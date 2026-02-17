#include <iostream>
using namespace std;

int factorial(int x) {
    int f = 1;
    for(int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n, r;
    cin >> n >> r;
    int result = factorial(n) / (factorial(r) * factorial(n - r));
    cout << result;
    return 0;
}

