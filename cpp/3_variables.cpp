#include<iostream>
using namespace std;

int main() {
    // Characters
    // In cpp, you need to use single-quotation to denote a character.
    // Also, within a single-quotation, you can't write multiple-chars.
    char ch = 'A'; // 65 (from ASCII table)
    cout << ch << endl;

    // String == An array of characters
    // In cpp, you need to use double-quotation to denote a string.
    // Also, you can't use double-quoted character (a single character string) to be assigned to a char variable.
    // char ch = "a"; // Here, "a" is not actually considered a character data type, rather is being considered as a single character string. That's why you can't assign a double-quoted character to a character variable
    string str = "a";
    cout << "Single character string: " << str << endl;

    string name = "John"; // 4 letter string, so, max index is 3
    cout << "First letter of Name \"John\" is " << name[0] << endl;

    int max_idx = name.size() - 1;
    cout << "Max-index of the string \"John\" is " << max_idx << endl;

    return 0;
}