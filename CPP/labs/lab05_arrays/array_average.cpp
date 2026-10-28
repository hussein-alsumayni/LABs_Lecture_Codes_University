// Lab 5: Array initialization, printing and average
#include <iostream>
using namespace std;

const int SIZE = 10;

// first 5 elements = index squared, last 5 elements = 3 * index
void initializeArray(double alpha[], int size) {
    for (int i = 0; i < size; i++) {
        if (i < 5)
            alpha[i] = i * i;
        else
            alpha[i] = 3 * i;
    }
}

// prints 10 elements per line
void printArray(const double alpha[], int size) {
    for (int i = 0; i < size; i++) {
        cout << alpha[i] << " ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
}

double calculateAverage(const double alpha[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += alpha[i];
    return sum / size;
}

void printBelowAverage(const double alpha[], int size, double average) {
    cout << "Values less than the average: ";
    for (int i = 0; i < size; i++) {
        if (alpha[i] < average)
            cout << alpha[i] << " ";
    }
    cout << endl;
}

int main() {
    double alpha[SIZE];

    initializeArray(alpha, SIZE);

    cout << "Array elements:" << endl;
    printArray(alpha, SIZE);

    double average = calculateAverage(alpha, SIZE);
    cout << "Average = " << average << endl;
    printBelowAverage(alpha, SIZE, average);

    return 0;
}
