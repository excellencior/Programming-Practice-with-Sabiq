#include<iostream> // This line includes a lot of C++ code to enable you to use input/output abilities of C++
using namespace std; // Using the standard namespace

int main() {
    // Variables : We use them to store different kinds data
    
    // Data Types : Integer (1, 20, 0 ..), Floats (1.3, 20.2, 0.4 ....), Characters ('a', 'A', ...), Strings ("Sabiq", "USA", ....) etc.

    // Integer Data
    int num = 0; // An integer type variable storing integer type data
    // Declaring that I am creating an integer variable and also assigning the data in the same line.

    // What if, you just want to declare the variable and assign the data later?
    int num1; // That's it!

    num1 = 10; // Assigned the data, done!

    // Print both of the variables' data in the console
    cout << num << ' ' << num1 << endl;

    // Floating Point Data
    float float_num = 5.5;

    cout << float_num << endl;

    int dummy = 5.5;
    cout << dummy << endl;
    // What's the output will be?
    // Let's break down the scenario. You are declaring an integer type of variable but the data you're assigning to that variable is not an integer, rather a float
    // 1. An integer variable
    // 2. A floating point type data
    // Output => 5 (whyyy??) (See the note.)

    // There is a special type of floating point, double, which has more data holding capacity than float
    double double_num = 100.9;
    
    cout << "Double num = " << double_num << endl;

    return 0; // Just a dummy code to satisfy the condition that the main() function needs to return an integer
}