#include<iostream>
using namespace std;

int main() {
    // Task: Define an array called "fruits", containing a list of fruits
    // 1. Creating an array
    // Two cases:

    // You are declaring an array variable and also initializing it
    string fruits[] = {"Apple", "Orange", "Avocado", "Cherry", "Mango"};

    // What if, I wanted to only declare the array variable and populate it later
    string games[4];
    games[0] = "Football"; // 0
    games[1] = "Cricket"; // 1
    games[2] = "Hockey"; // 2
    games[3] = "Basketball"; // 3

    // 2. Read an array
    cout << "Fruits-1: " << fruits[0] << endl;
    cout << "Fruits-2: " << fruits[1] << endl;
    cout << "Games-2: " << games[1] << endl;
    cout << "Games-3: " << games[2] << endl;
    
    // Edge Case : The cases you need to consider when your program might break / won't work and write code in a way that handles these specific cases
    // f.e. you are trying to populate an array of size more than specified
    
    // Two cases
    // Initialization at declaration
    string persons[3] = {"John", "Amani", "Hubert"}; // [3] means that you are the flexibility to assign an array or size upto 3 (<= 3), that also means that you can't assign an array of more than size 3
    // If you used [] instead of [3], CPP would automatically assign the array size, so, no issues with bounding your assigned array size

    // Declaration then population
    string teams[3];
    teams[0] = "Argentina";
    teams[1] = "Brazil";
    teams[2] = "Ghana";
    // teams[3] = "Cape Verde";   // Size > 3, not permitted by CPP

    // Overwrting data / changing array entry
    // teams[2] = "Spain"; // Overwritten "Ghana"
    // cout << teams[2] << endl;

    // Integer array
    int nums[] = {1, 2, 3, 4};

    // Float array
    float floats[] = {1.2, 3.2, 5.5};
    // or
    double doubles[] = {4.4, 6.5, 8.9, 1.2};

    // Character array
    char chars[] = {'a', 'b', 'c'};

    // As you know that a string is an array of characters, how do you access the middle character of the 2nd person's name
    cout << "The name of the 2nd person: " << persons[1] << endl;
    // 1, 2, 3, 4, 5 <== nums (odd size)
    // We have 5 numbers, and if we divide it by 2, it means we are trying to cut it in half to expose the middle number
    // 5/2 = 2 (in integer) (1, 2) (3, 4, 5)
    // Now we can see that, if we just access the first value of the second group, we have the middle number
    // group1[last-entry] = nums[5/2]
    // group2[first-entry] = nums[5/2 + 1] (in terms of size, not index)
    cout << "The middle character of the 2nd person's name is: " << persons[1][persons[1].size()/2] << endl;
    
    // Details of how it's done
    string name = persons[1];
    int size_name = name.size();
    int middle_idx = size_name / 2;
    char middle_char = name[middle_idx];
    // Put them all together, you get
    middle_char = persons[1][persons[1].size()/2];

    return 0;
}