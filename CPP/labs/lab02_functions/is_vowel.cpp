// Lab 2 - Task 2: Check if a character is a vowel
#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);  // so 'A' and 'a' are treated the same
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isVowel(ch))
        cout << ch << " is a vowel." << endl;
    else
        cout << ch << " is not a vowel." << endl;

    return 0;
}
