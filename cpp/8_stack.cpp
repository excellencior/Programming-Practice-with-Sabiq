#include <iostream>
#include <stack>
using namespace std;

// x1
// x2
// x3
// x4
// This is the dish rack, that we need to wash, one by one
// Take one dish out, clean, put into the dish drawer

// After all the cleaning is done: The dish drawer looks like this:
// x4 <- Top
// x3
// x2
// x1 <- Bottom

template<typename T>
void printStack(stack<T> gs) {
    stack<T> copy(gs);
    while (!gs.empty()) {
        cout << gs.top() << endl;
        gs.pop();
    }
}

stack<string> uncleanedDishStack;
stack<string> cleanedDishStack;

void takeOneDishToClean() {
    cout << "Grab dish: " << uncleanedDishStack.top() << " and clean!" << endl;
    cleanedDishStack.push(uncleanedDishStack.top());
    uncleanedDishStack.pop();
}

void storeTheCleanedDishToDishDrawer() {
    cout << "Put the dish: " << cleanedDishStack.top() << " into the drawer!" << endl;
}

int main() {
    // Stack
    // Exactly what the name says.
    // Dishwasher rack: You organize your dishes in the rack on top of each other. So, when you want to use one, you take the one that's at the top of the rack. (that's what a Stack is)
    // LIFO => Last In First Out

    // Task: Simulate the dishwasher example using a stack
    uncleanedDishStack.push("x4");
    uncleanedDishStack.push("x3");
    uncleanedDishStack.push("x2");
    uncleanedDishStack.push("x1");

    printStack(uncleanedDishStack);
    
    cout << "\nStarting to clean the dishes--\n" << endl;
    // We have a total of 4 dishes to clean and then put into the drawer (so, it's a repetitive task, use loop)
    for (int i=0; i<4; i++) {
        takeOneDishToClean();
        cout << " -- Cleaning COMPLETE --" << endl;
        storeTheCleanedDishToDishDrawer();
    }

    cout << "\nWhoorayy! We're done with dish cleaning!" << endl;

    printStack(cleanedDishStack);
    
    return 0;
}