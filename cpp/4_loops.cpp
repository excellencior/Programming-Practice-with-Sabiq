#include <iostream>
using namespace std;

int main() {
    string students[] = {"Alice", "Bob", "Charlie", "Cameron"};
    // cout << students[0][4] << endl;
    // cout << students[1][2] << endl;
    // cout << students[2][6] << endl;

    // Syntax
    // In CPP:
    // For loop:
    // for (declaration; condition; increment) { .... }

    // In python:
    // for i in range(limit): ...

    // Declaration: Creating an index variable for the loop. You can only access and use this variable from inside of the for loop body. You loose access to this variable when you are out of the loop scope.
    for (int i = 0; i < 4; i++) {
        int last_idx = students[i].size() - 1;
        cout << students[i][last_idx] << endl;
    }

    // Task: Take a person's name from the terminal and print the names.

    // While loop:
    // declaration
    // while(condition) {
    //     increment
    // ...
    // }

    int limit = 4, i = 0;
    string name;
    string names[limit]; // We can take input of upto 10 persons
    while(i < limit) { // 0 means false in cpp
        cout << (i+1) << ". Please enter your name: "; cin >> name;
        names[i] = name;
        i++;
    }

    for (i = 0; i < limit; i++) {
        cout << (i+1) << ". " << names[i] << endl;
    }

    // using break and continue
    // Infinite while loop
    string usr_cmd;
    while (true) {
        cout << "Please enter Yes/No/Exit: "; cin >> usr_cmd;

        if (usr_cmd == "Yes") {
            cout << "Messi is the GOAT!" << endl;
        } else if (usr_cmd == "No") {
            cout << "Messi is still the GOAT!" << endl;
        } else if (usr_cmd == "Exit") {
            break; // Stop the loop execution
        } else {
            cout << "You selected a wrong command" << endl;
            continue; // Basically skip everything below and takes you to the next loop-step directly
        }

        cout << "The FIFA-2026 world cup has 48 teams in the group stage" << endl;
    }
    
    return 0;
}