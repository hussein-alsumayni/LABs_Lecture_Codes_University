// Lab 2 - Task 1: Convert Fahrenheit to Celsius
#include <iostream>
using namespace std;

double toCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double f;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> f;

    cout << f << " F = " << toCelsius(f) << " C" << endl;
    return 0;
}
