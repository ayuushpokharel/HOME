#include <iostream>
using namespace std;

// Inline function for addition
inline float add(float a, float b) {
    return a + b;
}

// Inline function for subtraction
inline float subtract(float a, float b) {
    return a - b;
}

// Inline function for multiplication
inline float multiply(float a, float b) {
    return a * b;
}

// Inline function for division
inline float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cerr << "Error: Division by zero\n";
        return 0;
    }
}

// Inline function for modulus
inline int modulus(int a, int b) {
    return a % b;
}

int main() {
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subtract(num1, num2) << endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;
    cout << "Division: " << divide(num1, num2) << endl;

    int intNum1 = static_cast<int>(num1);
    int intNum2 = static_cast<int>(num2);
    cout << "Modulus: " << modulus(intNum1, intNum2) << endl;

    return 0;
}
