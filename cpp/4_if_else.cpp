#include<iostream>
using namespace std;

int main() {
    // In python: True / False meant that a condition can either be true or false (it didn't necessarily have a specific integer value)
    // But in CPP: True means you have a non-zero value and False means you have a zero value

    // if (condition) {
    //     ....
    // } else if (condition) {
    //     ...
    // } else {
    //     ...
    // }

    if (true) {
        cout << "The condition is true" << endl;
    }

    if (false) {
        cout << "The condition is false" << endl;
    } else if (true) {
        cout << "Else-if the condition is true!" << endl;
    } else {
        cout << "Else the condition is true" << endl;
    }

    // Everything zero is considered false in CPP
    if (0) {
        cout << "It will not print in the console" << endl;
    }

    // Everything non-zero is considered true in CPP
    if (-4) {
        cout << "It will print in the console" << endl;
    }

    string name;
    cout << "Please enter your name: "; cin >> name;
    if (name == "John") {
        cout << "Good morning, John!" << endl;
    } else if (name == "David") {
        cout << "How are you, David?" << endl;
    } else if (name == "Mary") {
        cout << "Where are you going at this morning, Mary?" << endl;
    } else {
        cout << "Good morning to me!!" << endl;
    }

    // Not false => True
    // Not operator (!) => It inverts boolean values
    if (!false) {
        cout << "This is not false" << endl;
    }
    
    return 0;
}