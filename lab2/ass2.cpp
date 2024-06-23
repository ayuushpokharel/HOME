#include <iostream>
using namespace std;

// Function to calculate power when x is an integer
int power(int x, int n) {
    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

// Function to calculate power when x is a float
float power(float x, int n) {
    float result = 1.0;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    cout << "\n" << power(2, 3);        // Outputs 8
    cout << "\n" << power(2.5f, 3);     // Outputs 15.625
    cout << "\n" << power(3, 4);        // Outputs 81
    cout << "\n" << power(1.2f, 5);     // Outputs 2.48832
    return 0;
}
