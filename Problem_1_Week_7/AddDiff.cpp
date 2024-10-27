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
    long long num1, num2;
    int choice;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "Choose an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    
    if (choice == 1) {
        cout << "Result: " << add(num1, num2) << endl;
    } else if (choice == 2) {
        cout << "Result: " << subtract(num1, num2) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}