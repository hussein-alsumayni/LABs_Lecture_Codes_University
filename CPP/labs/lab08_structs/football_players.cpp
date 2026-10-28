// Lab 8: Football players database using structs
#include <iostream>
#include <string>
using namespace std;

const int MAX_PLAYERS = 10;

struct Player {
    string name;
    string position;
    int touchdowns;
    int catches;
    int passingYards;
    int receivingYards;
    int rushingYards;
};

void inputPlayer(Player &p) {
    cout << "Name: ";
    getline(cin, p.name);
    cout << "Position: ";
    getline(cin, p.position);
    cout << "Touchdowns: ";
    cin >> p.touchdowns;
    cout << "Catches: ";
    cin >> p.catches;
    cout << "Passing yards: ";
    cin >> p.passingYards;
    cout << "Receiving yards: ";
    cin >> p.receivingYards;
    cout << "Rushing yards: ";
    cin >> p.rushingYards;
    cin.ignore(1000, '\n');  // clear the leftover newline before the next getline
}

void inputAll(Player players[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "\nPlayer " << i + 1 << endl;
        inputPlayer(players[i]);
    }
}

void outputPlayer(const Player &p) {
    cout << p.name << " (" << p.position << ") | TD: " << p.touchdowns
         << " | Catches: " << p.catches
         << " | Passing: " << p.passingYards
         << " | Receiving: " << p.receivingYards
         << " | Rushing: " << p.rushingYards << endl;
}

void outputAll(const Player players[], int count) {
    for (int i = 0; i < count; i++)
        outputPlayer(players[i]);
}

// returns the index of the player, or -1 if not found
int findPlayer(const Player players[], int count, const string &name) {
    for (int i = 0; i < count; i++) {
        if (players[i].name == name)
            return i;
    }
    return -1;
}

void updatePlayer(Player players[], int count) {
    string name;
    cout << "Enter the name of the player to update: ";
    getline(cin, name);

    int index = findPlayer(players, count, name);
    if (index == -1) {
        cout << "Player not found." << endl;
        return;
    }

    cout << "Enter the new data:" << endl;
    inputPlayer(players[index]);
    cout << "Player updated." << endl;
}

int main() {
    Player players[MAX_PLAYERS];
    int choice;

    cout << "Enter the data of " << MAX_PLAYERS << " players." << endl;
    inputAll(players, MAX_PLAYERS);

    do {
        cout << "\n1. Show all players" << endl;
        cout << "2. Search for a player" << endl;
        cout << "3. Update a player" << endl;
        cout << "4. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        cin.ignore(1000, '\n');

        if (choice == 1) {
            outputAll(players, MAX_PLAYERS);
        } else if (choice == 2) {
            string name;
            cout << "Enter the player's name: ";
            getline(cin, name);
            int index = findPlayer(players, MAX_PLAYERS, name);
            if (index == -1)
                cout << "Player not found." << endl;
            else
                outputPlayer(players[index]);
        } else if (choice == 3) {
            updatePlayer(players, MAX_PLAYERS);
        }
    } while (choice != 4);

    return 0;
}
