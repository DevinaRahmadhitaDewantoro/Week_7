#include <iostream>
using namespace std;

// Function prototype for calculating GCD using recursion
long long gcd(long long n1, long long n2);

int main() {
    // Hardcoded test case
    long long n1 = 123456789012345;
    long long n2 = 98765432109876;
    long long expectedGCD = 3; // Expected GCD value for the test case

    // Calculate GCD
    long long resultGCD = gcd(n1, n2);
    

    // Check if the test passed or failed
    if (resultGCD == expectedGCD) {
        cout << "Test passed!" << endl; // Output if the result is correct (the same as expected output)
    } else {
        cout << "Test failed!" << endl; // Output if the result is incorrect (not the same as expected output)
    }

    return 0; 
}

// Recursive function to calculate GCD of two numbers
long long gcd(long long n1, long long n2) {
    if (n2 != 0) { // If the second number is not zero
        return gcd(n2, n1 % n2); // Recursive call with n2 and the remainder of n1 divided by n2
    } else {
        return n1; // Base case: return n1 when n2 is zero
    }
}
