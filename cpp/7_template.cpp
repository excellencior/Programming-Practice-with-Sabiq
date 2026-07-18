#include <iostream>
#include <utility>
#include <vector>
using namespace std;

template<typename T>
void print(vector<T> super_vector) {
    for (T t: super_vector) {
        cout << t << ' ';
    }
    cout << endl;
}

template<typename a, typename b>
void print(vector<pair<a, b>> super_vp) {
    for (pair<a, b> sp: super_vp) {
        cout << sp.first << ' ' << sp.second << endl;
    }
}

template<typename T1, typename T2>
void display(T1 a, T2 b) {
    cout << a << ' ' << b << endl;
}

int main() {
    // What's a template?
    // A template is basically a blueprint of a multi-type support functions / classes / data-structures etc.
    // Why do you even need a template?
    // Suppose you need to print vector of integers, string and doubles as well. Do you write the same looking function but just with different data type everytime?


    vector<int> ids;
    ids.push_back(1);
    ids.push_back(2);
    ids.push_back(3);
    print(ids);

    vector<string> names;
    names.push_back("John");
    names.push_back("Mary");
    names.push_back("David");
    print(names);

    vector<pair<string, int>> students_vec;
    students_vec.push_back({"Mary", 2});
    students_vec.push_back({"David", 3});
    students_vec.push_back({"John", 1});
    students_vec.push_back({"Tim", 4});
    print(students_vec);

    vector<pair<string, string>> vps;
    vps.push_back(make_pair("John", "Mary"));
    vps.push_back(make_pair("David", "Tim"));
    print(vps);

    display("John", 1);
    display(50, 50);
    display("John", "Mary");
    display(50, 50.5);
    display(4, 'A');

    // Generic Containers : Can be used to create a function that is able to print both vectors and sets
    // So, you don't need to write both of the functions below:
    // template<typename T>
    // void print(vector<T> vt)...
    // template<typename T>
    // void print(set<T> st)...

    return 0;
}