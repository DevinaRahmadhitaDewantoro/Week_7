#include <iostream>
using namespace std;

// Function prototype
long long factorial(long long x);

int main() {
    // Hardcoded test case for factorial of 20
    long long expectedValue = 2432902008176640000; // Expected value of 20!
    long long testValue = 20;
    long long result = factorial(testValue);

    if (result == expectedValue) {
        cout << "Test passed!" << endl; // Output if the result is correct (the same as expected output)
    } else {
        cout << "Test failed!" << endl; // Output if the result is incorrect (not the same as expected output)
    }

    return 0; 
}

// Recursive function to calculate factorial
long long factorial(long long x) {
    if (x > 1) {
        return x * factorial(x - 1); // Recursive call
    } else {
        return 1; // Base case
    }
}
