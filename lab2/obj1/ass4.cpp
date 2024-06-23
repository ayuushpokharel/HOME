#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

int main() {
    int int1 = 5, int2 = 10;
    float float1 = 3.5, float2 = 2.5;

    // Adding two integers
    cout << "Sum of integers: " << add(int1, int2) << endl;

    // Adding two floating-point numbers
    cout << "Sum of floats: " << add(float1, float2) << endl;

    return 0;
}
