// Lab 3 - Task 1: Count how many times each lowercase vowel appears
#include <iostream>
#include <string>
using namespace std;

// Takes one character and increases the matching vowel counter
void countVowel(char ch, int &a, int &e, int &i, int &o, int &u) {
    switch (ch) {
        case 'a': a++; break;
        case 'e': e++; break;
        case 'i': i++; break;
        case 'o': o++; break;
        case 'u': u++; break;
    }
}

int main() {
    string text;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    cout << "Enter a string: ";
    getline(cin, text);

    for (char ch : text)
        countVowel(ch, a, e, i, o, u);

    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;

    return 0;
}
