// Lab 7: Monthly high/low temperatures using a 2D array
#include <iostream>
#include <string>
using namespace std;

const int MONTHS = 12;
const int HIGH = 0;  // column 0 = high temperature
const int LOW = 1;   // column 1 = low temperature

const string monthNames[MONTHS] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

void getData(double temps[][2], int months) {
    for (int i = 0; i < months; i++) {
        cout << monthNames[i] << " - high: ";
        cin >> temps[i][HIGH];
        cout << monthNames[i] << " - low : ";
        cin >> temps[i][LOW];
    }
}

double averageHigh(const double temps[][2], int months) {
    double sum = 0;
    for (int i = 0; i < months; i++)
        sum += temps[i][HIGH];
    return sum / months;
}

double averageLow(const double temps[][2], int months) {
    double sum = 0;
    for (int i = 0; i < months; i++)
        sum += temps[i][LOW];
    return sum / months;
}

// returns the index of the month with the highest high temperature
int indexHighTemp(const double temps[][2], int months) {
    int index = 0;
    for (int i = 1; i < months; i++) {
        if (temps[i][HIGH] > temps[index][HIGH])
            index = i;
    }
    return index;
}

// returns the index of the month with the lowest low temperature
int indexLowTemp(const double temps[][2], int months) {
    int index = 0;
    for (int i = 1; i < months; i++) {
        if (temps[i][LOW] < temps[index][LOW])
            index = i;
    }
    return index;
}

int main() {
    double temps[MONTHS][2];

    getData(temps, MONTHS);

    int hottest = indexHighTemp(temps, MONTHS);
    int coldest = indexLowTemp(temps, MONTHS);

    cout << "\nAverage high: " << averageHigh(temps, MONTHS) << endl;
    cout << "Average low : " << averageLow(temps, MONTHS) << endl;
    cout << "Highest temperature: " << temps[hottest][HIGH]
         << " (" << monthNames[hottest] << ")" << endl;
    cout << "Lowest temperature : " << temps[coldest][LOW]
         << " (" << monthNames[coldest] << ")" << endl;

    return 0;
}
