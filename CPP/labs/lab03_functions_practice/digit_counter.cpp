// Lab 3 - Task 2: Count odd, even and zero digits of a number
#include <iostream>
using namespace std;

void countDigits(long long number, int &odd, int &even, int &zeros) {
    odd = even = zeros = 0;

    if (number < 0)
        number = -number;  // the sign is not a digit

    // special case: the number 0 has one zero digit
    if (number == 0) {
        zeros = 1;
        return;
    }

    while (number > 0) {
        int digit = number % 10;

        if (digit == 0)
            zeros++;
        else if (digit % 2 == 0)
            even++;
        else
            odd++;

        number /= 10;
    }
}

int main() {
    long long number;
    int odd, even, zeros;

    cout << "Enter an integer: ";
    cin >> number;

    countDigits(number, odd, even, zeros);

    cout << "Odd digits : " << odd << endl;
    cout << "Even digits: " << even << endl;
    cout << "Zero digits: " << zeros << endl;

    return 0;
}
