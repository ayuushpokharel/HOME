#include <iostream>
using namespace std;

// Inline function to convert Fahrenheit to Celsius
inline float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    float fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    cout << "Temperature in Celsius: " << fahrenheitToCelsius(fahrenheit) << endl;
    return 0;
}
