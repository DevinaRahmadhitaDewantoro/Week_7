#include <iostream>
using namespace std;

// Function to perform addition
long double add(long double a, long double b) {
    return a + b;
}

// Function to perform subtraction
long double subtract(long double a, long double b) {
    return a - b;
}

int main() {
    // Hardcoded values in the billion range
    long double num1 = 1500000000.0; // 1.5 billion
    long double num2 = 3500000000.0;  // 3.5 billion
    
    long double expectedAdditionResult = 5000000000.0;      // Expected addition result: 5 billion
    long double expectedSubtractionResult = -2000000000.0;   // Expected subtraction result: -2 billion

    // Perform tests
    bool additionTest = (add(num1, num2) == expectedAdditionResult);
    bool subtractionTest = (subtract(num1, num2) == expectedSubtractionResult);

    // Check if both tests passed
    if (additionTest && subtractionTest) {
        cout << "Test passed" << endl;
    } else {
        cout << "Test failed" << endl;
    }

    return 0;
}
