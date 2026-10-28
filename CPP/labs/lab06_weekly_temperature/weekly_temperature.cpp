// Lab 6: Analyze seven days of temperature readings
#include <iostream>
using namespace std;

const int DAYS = 7;

int main() {
    double temps[DAYS];

    for (int i = 0; i < DAYS; i++) {
        cout << "Enter the temperature for day " << i + 1 << ": ";
        cin >> temps[i];
    }

    // start with the first day, then compare with the rest
    double highest = temps[0];
    double lowest = temps[0];
    double sum = 0;

    for (int i = 0; i < DAYS; i++) {
        if (temps[i] > highest)
            highest = temps[i];
        if (temps[i] < lowest)
            lowest = temps[i];
        sum += temps[i];
    }

    cout << "\nHighest temperature: " << highest << endl;
    cout << "Lowest temperature : " << lowest << endl;
    cout << "Average temperature: " << sum / DAYS << endl;

    return 0;
}
