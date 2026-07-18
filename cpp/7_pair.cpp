#include <iostream>
#include <vector>
#include <set>
using namespace std;

void print(pair<string, int> p) {
    cout << "\n------- Pair -------" << endl;
    cout << p.first << ' ' << p.second << endl;
}

void print(vector<pair<string, int>> sp) {
    cout << "\n-----Students-----:" << endl;
    for (pair<string, int> p: sp) {
        cout << p.first << ' ' << p.second << endl;
    }
    cout << endl;
}

void print(set<pair<string, int>> vp) {
    cout << "\n-----Students-----:" << endl;
    for (pair<string, int> p: vp) {
        cout << p.first << ' ' << p.second << endl;
    }
    cout << endl;
}

int main() {
    // Pair
    // A pair is a mini collection of data that can hold different/same types but the catch is that you can only store two elements

    // Task: Suppose you are maintaining a class of 30 students. So, each student is organized by a studentID. Storing the student information inside of a pair.
    
    // 1. Creating a pair
    // a. Through initialization x1
    pair<string, int> student1("John", 10);
    print(student1);

    // b. Through initialization x2
    pair<string, int> student2 = {"John", 10}; // It's the recommended way to create a pair
    print(student2);

    // c. Through initialization x3
    auto student3 = make_pair("John", 10);
    print(student3);

    // d. Through declaration and assignment
    pair<string, int> student4;
    student4.first = "John";
    student4.second = 10;
    print(student4);

    // 2. Updating a pair
    student2.first = "Mary";
    print(student2);

    // 3. Using a pair
    // a. With a vector
    vector<pair<string, int>> students_vec;
    students_vec.push_back({"Mary", 2});
    students_vec.push_back({"David", 3});
    students_vec.push_back({"John", 1});
    students_vec.push_back({"Tim", 4});
    print(students_vec);

    // b. With a set
    set<pair<string, int>> students_set;
    students_set.insert({"John", 2});
    students_set.insert({"Mary", 1});
    students_set.insert({"David", 3});
    students_set.insert({"Jim", 4});
    print(students_set);

    // In terms of ASCII D < J < M

    students_set.erase({"David", 3});
    print(students_set);
    
    return 0;
}