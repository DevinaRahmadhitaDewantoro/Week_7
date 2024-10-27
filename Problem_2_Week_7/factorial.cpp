#include <iostream>
using namespace std;

// Function prototype
long long factorial(long long x);

int main() {
    long long x;
    cout << "Enter an integer number: ";
    cin >> x;
    cout << "Factorial of " << x << " = " << factorial(x) << endl;
    return 0;
}

long long factorial(long long x) {
    if (x > 1) {
        return x * factorial(x - 1); // Recursive call
    } else {
        return 1; // Base case
    }
}
