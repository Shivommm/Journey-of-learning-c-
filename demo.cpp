#include <iostream>
using namespace std;

int main() {
    int code;
    double amountINR = 1000; // fixed amount in INR
    double converted;

    cout << "Currency Converter\n";
    cout << "1. USD\n2. EUR\n3. INR\n";
    cout << "Enter currency code: ";
    cin >> code;

    switch (code) {
        case 1:
            converted = amountINR / 83.0;  // Assume 1 USD = 83 INR
            cout << "INR " << amountINR << " = USD " << converted;
            break;
        case 2:
            converted = amountINR / 90.0;  // Assume 1 EUR = 90 INR
            cout << "INR " << amountINR << " = EUR " << converted;
            break;
        case 3:
            cout << "INR " << amountINR << " = INR " << amountINR;
            break;
        default:
            cout << "Invalid currency code.";
    }

    return 0;
}
