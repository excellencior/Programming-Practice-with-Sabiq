#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vec) {
    // for (int i=0; i < vec.size(); i++) {
    //     cout << vec[i] << ' ';
    // }
    // cout << endl;

    // New version of for loop -> Enhanced For loop
    // For STLs only

    for (int v: vec) {
        cout << v << ' ';
    }
    cout << endl;
}

void print(vector<float> fvec) {
    for (float v: fvec) {
        cout << v << ' ';
    }
    cout << endl;
}

void print(vector<string> stvec) {
    for (string v: stvec) {
        cout << v << ' ';
    }
    cout << endl;
}

void print(vector<vector<int>> vec2d) {
    for (vector<int> vec1d: vec2d) {
        print(vec1d);
    }
    cout << endl;
}

int main() {
    // STL - Standard Template Library 
    // Library - (A storage of knowledge) but you can also use these for various tasks
    vector<int> vec; // An integer type vector named vec (variable)

    // What is a vector?
    // In physics: Vector is a quantity with both value and a direction
    // But in programming, vector is simply a storage of data, similar to arrays but with some predefined functions and extra perks

    // Perks of using Vector
    // 1. You don't need to specify the size of the vector before starting to use it
    // For an array: int arr[10] but for a vector: vector<int> arr; <-- See? No need to specify the size
    // 2. Dynamic Memory Allocation
    // When you keep using a vector to store more and more data, it allocates more and more memory on the go
    // .....

    // Predefined functions and how to use them
    // Inserting data
    vec.push_back(1); // [].push_back(1) => [1]
    vec.push_back(2); // [1].push_back(2) => [1, 2]
    vec.push_back(3); // [1, 2].push_back(3) => [1, 2, 3]

    print(vec);
    
    // Removing data
    vec.pop_back(); // [1, 2, 3].pop_back() => [1, 2]
    vec.pop_back(); // [1, 2].pop_back() => [1]

    print(vec);

    // Modifying data
    vec[1] = 100;

    print(vec);

    cout << "Vector Front: " << vec.front() << endl;
    cout << "Vector Back: " << vec.back() << endl;

    // Checking whether a vector is empty or not
    vector<int> demo; // empty

    if (!demo.empty()) {
        demo.pop_back();
    }
    print(demo);

    // Initializing a vector
    vector<int> init = {1, 2, 3, 4};
    print(init);

    // Remove everything from a vector in one-go
    init.clear();
    print(init);

    // How do you input user data in the vector
    int n = 5;// Let's say I want to insert 5 data in the vector
    for (int i=0; i<5; i++) {
        int x; cin >> x;
        init.push_back(x);
    }
    print(init);

    // Vector of other data types
    vector<float> fvec;
    fvec.push_back(3);
    fvec.push_back(4.4);
    print(fvec);

    vector<string> stvec;
    stvec.push_back("Sabiq");
    stvec.push_back("John");
    print(stvec);

    vector<vector<int>> vec2d;
    vector<int> row1 = {1, 2};
    vector<int> row2 = {3, 4};
    vec2d.push_back(row1);
    vec2d.push_back(row2);
    print(vec2d);
    
    return 0;
}