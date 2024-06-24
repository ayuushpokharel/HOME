#include <iostream>
using namespace std;

// Inline function to calculate tax
inline float calculateTax(float income, float taxRate) {
    return income * taxRate / 100.0;
}

int main() {
    float income;
    char maritalStatus;
    float taxFreeAmount;
    const float taxRate = 15.0;

    // Input income and marital status
    cout << "Enter your annual income: ";
    cin >> income;
    cout << "Enter your marital status (U for unmarried, M for married): ";
    cin >> maritalStatus;

    // Determine tax-free amount based on marital status
    if (maritalStatus == 'U' || maritalStatus == 'u') {
        taxFreeAmount = 85000;
    } else if (maritalStatus == 'M' || maritalStatus == 'm') {
        taxFreeAmount = 100000;
    } else {
        cerr << "Invalid marital status input!" << endl;
        return 1;
    }

    // Calculate taxable income
    float taxableIncome = income - taxFreeAmount;

    // Ensure taxable income is not negative
    if (taxableIncome < 0) {
        taxableIncome = 0;
    }

    // Calculate tax
    float tax = calculateTax(taxableIncome, taxRate);

    // Output the tax
    cout << "The tax to be paid is: " << tax << endl;

    return 0;
}
