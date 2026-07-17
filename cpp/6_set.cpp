#include <iostream>
#include <set>
using namespace std;

void print(set<int> s) {
    // Using enhanced for loop
    for (int n: s) {
        cout << n << ' ';
    }
    cout << endl;
}

int main() {
    // Set : A container that stores unique data (no duplicates)
    // Keeps the elements sorted automatically

    set<int> nums;

    // Inserting data
    nums.insert(3);
    nums.insert(4);
    nums.insert(5);
    nums.insert(5); // duplicate, will be ignored
    nums.insert(2); // should be sorted

    print(nums);

    // Removing data
    nums.erase(4);

    print(nums);

    // Check empty
    set<int> demo;
    if (!demo.empty()) {
        demo.erase(3);
    }
    print(demo);

    // Clearing data
    // nums.clear(); // removes all data
    // print(nums);

    // Finding data
    auto itr = nums.find(3);
    cout << *itr << endl;
    // Iterators, Pointers

    auto a = 10;
    auto b = 10.10;
    auto c = "John";
    cout << typeid(c).name() << endl;

    return 0;
}