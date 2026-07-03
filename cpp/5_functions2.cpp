#include<iostream>
using namespace std;

void cprint(int dollNo) {
    cout << "You opened doll - " << dollNo << endl;
}

void openDoll4(int i) {
    cout << "There's no doll anymore" << endl;
}

void openDoll3(int i) {
    cprint(i);
    openDoll4(i+1);
}

void openDoll2(int i) {
    cprint(i);
    openDoll3(i+1);
}

void openDoll1(int i) {
    cprint(i);
    openDoll2(i+1);
}

void openDoll(int i) {
    if (i == 4) cout << "There's no doll anymore" << endl;
    else cprint(i);
}

void recurOpenDoll(int i) {
    if (i == 4) { // Base condition, to interrupt/stop the call stack
        cout << "There's no doll anymore" << endl;
        return; // Return from this call, so, start unwrapping the call stack
    }

    cprint(i);
    recurOpenDoll(i+1); // Recursion
}

int main() {
    // Nested function calling
    cout << "Using Nested Function Calls" << endl;
    openDoll1(1);

    // Alternatives to what we can do for what we have already done using multiple functions
    cout << "\nUsing Loops" << endl;
    for (int i=1; i<=4; i++) {
        openDoll(i);
    }

    // Recursion
    cout << "\nUsing Recursion" << endl;
    recurOpenDoll(1);

    return 0;
}
