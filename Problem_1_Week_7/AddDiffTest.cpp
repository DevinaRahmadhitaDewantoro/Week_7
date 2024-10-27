#include <iostream>
using namespace std;

// Function to perform addition
long long add(long long a, long long b) {
    return a + b;
}

// Function to perform subtraction
long long subtract(long long a, long long b) {
    return a - b;
}

int main() {
    // Hardcoded values in the billion range
    long long num1 = 1500000000; // 1.5 billion
    long long num2 = 3500000000;  // 3.5 billion
    
    long long expectedAdditionResult = 5000000000;      // Expected addition result: 5 billion
    long long expectedSubtractionResult = -2000000000;   // Expected subtraction result: -2 billion

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
