#include<iostream>
using namespace std;

int main() {
    // We will learn how to take user input from the terminal
    // cin (console input)
    string name;
    cout << "Please enter your name: ";
    cin >> name;

    // For python:
    // name = input("Please enter your name: ")

    cout << "Your name is: " << name << endl;

    return 0;
}