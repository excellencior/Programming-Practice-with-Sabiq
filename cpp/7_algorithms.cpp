#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using vi = vector<int>;
using vs = vector<string>;

template<typename T>
void print(vector<T> v) {
    for (T d: v) cout << d << ' ';
    cout << endl;
}

void print(vector<pair<string, int>> sp) {
    cout << "\n-----Students-----:" << endl;
    for (pair<string, int> p: sp) {
        cout << p.first << ' ' << p.second << endl;
    }
    cout << endl;
}

bool compare(string a, string b) {
    return a > b;
}
// 3, 2, 5
// 5, 3, 2

bool compare_ids(pair<string, int> a, pair<string, int> b) {
    return a.second < b.second;
}

int main() {
    // What is an algorithm?
    // A specified set of steps to follow in order to accomplish a task

    // Task: Sort a vector of integers
    vi ids;
    ids.push_back(5);
    ids.push_back(8);
    ids.push_back(3);
    ids.push_back(1);
    ids.push_back(8);
    ids.push_back(5);
    print(ids);

    sort(ids.begin(), ids.end());
    print(ids);

    int cnt_5 = count(ids.begin(), ids.end(), 5);
    cout << "There are a total of " << cnt_5 << " fives (5s) in the vector" << endl;

    int max_elem = *max_element(ids.begin(), ids.end());
    cout << "The maximum element in the vector is: " << max_elem << endl;

    vs names;
    names.push_back("John");
    names.push_back("David");
    names.push_back("Tim");
    names.push_back("Amanda");
    print(names);

    // sort(names.begin(), names.end(), compare);
    // print(names);

    reverse(names.begin(), names.end());
    print(names);

    // Task: Sort the students based on their studentIDs
    vector<pair<string, int>> students_vec;
    students_vec.push_back({"Mary", 2});
    students_vec.push_back({"David", 3});
    students_vec.push_back({"John", 1});
    students_vec.push_back({"Tim", 4});
    print(students_vec);

    sort(students_vec.begin(), students_vec.end(), compare_ids);
    print(students_vec);

    return 0;
}