#include <iostream>
using namespace std;

// Function prototype for calculating GCD using recursion
long long gcd(long long n1, long long n2);

int main() {
    long long n1, n2;

    cout << "Enter two positive integers: "; 
    cin >> n1 >> n2; 

    cout << "G.C.D of " << n1 << " & " << n2 << " is: " << gcd(n1, n2); 
    return 0; 
}

// Recursive function to calculate GCD of two numbers
long long gcd(long long n1, long long n2) {
    if (n2 != 0) // If the second number is not zero
        return gcd(n2, n1 % n2); // Recursive call with n2 and the remainder of n1 divided by n2
    else 
        return n1; // Base case: return n1 when n2 is zero
}
