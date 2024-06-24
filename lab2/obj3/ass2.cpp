#include <iostream>
using namespace std;

// Function to calculate power when x is an integer with default n = 2
int power(int x, int n = 2) {
    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

// Function to calculate power when x is a float with default n = 2
float power(float x, int n = 2) {
    float result = 1.0;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    cout << "Power of 2^3: " << power(2, 3) << endl;        // Outputs 8
    cout << "Square of 2: " << power(2) << endl;           // Outputs 4 (default n = 2)
    cout << "Power of 2.5^3: " << power(2.5f, 3) << endl;  // Outputs 15.625
    cout << "Square of 2.5: " << power(2.5f) << endl;      // Outputs 6.25 (default n = 2)
    return 0;
}
