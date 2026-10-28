// Lab 2 - Task 4: Menu-driven 12-hour / 24-hour time converter
#include <iostream>
#include <iomanip>
using namespace std;

void showMenu() {
    cout << "\n--- Time Converter ---" << endl;
    cout << "1. 24-hour to 12-hour" << endl;
    cout << "2. 12-hour to 24-hour" << endl;
    cout << "3. Exit" << endl;
    cout << "Your choice: ";
}

void get24HourTime(int &hours, int &minutes) {
    cout << "Enter the time in 24-hour notation (hours minutes): ";
    cin >> hours >> minutes;
}

void get12HourTime(int &hours, int &minutes, char &period) {
    cout << "Enter the time in 12-hour notation (hours minutes): ";
    cin >> hours >> minutes;
    cout << "AM or PM? (A/P): ";
    cin >> period;
}

// 0 -> 12 AM, 1-11 -> AM, 12 -> 12 PM, 13-23 -> 1-11 PM
void convertTo12Hour(int hours24, int &hours12, char &period) {
    period = (hours24 < 12) ? 'A' : 'P';
    hours12 = hours24 % 12;
    if (hours12 == 0)
        hours12 = 12;
}

// 12 AM -> 0, 12 PM -> 12, any other PM hour gets +12
void convertTo24Hour(int hours12, char period, int &hours24) {
    hours24 = hours12 % 12;
    if (period == 'P' || period == 'p')
        hours24 += 12;
}

void displayTime(int hours, int minutes, const string &suffix) {
    cout << "Converted time: " << setfill('0') << setw(2) << hours
         << ":" << setw(2) << minutes << " " << suffix << setfill(' ') << endl;
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        if (choice == 1) {
            int h24, m, h12;
            char period;
            get24HourTime(h24, m);
            convertTo12Hour(h24, h12, period);
            displayTime(h12, m, period == 'A' ? "AM" : "PM");
        } else if (choice == 2) {
            int h12, m, h24;
            char period;
            get12HourTime(h12, m, period);
            convertTo24Hour(h12, period, h24);
            displayTime(h24, m, "");
        } else if (choice != 3) {
            cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 3);

    cout << "Goodbye!" << endl;
    return 0;
}
