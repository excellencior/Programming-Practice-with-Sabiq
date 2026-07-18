#include <iostream>
#include <vector>
using namespace std;

// legacy
typedef vector<int> vi;
typedef vector<string> vs;

// modern
using vd = vector<double>;

template<typename T>
void print(vector<T> v) {
    for (T i: v) cout << i << ' ';
    cout << endl;
}

int main() {
    vi ids;
    vi nums;
    vi primes;
    ids.push_back(1);
    ids.push_back(2);
    print(ids);
    
    vs names;
    names.push_back("John");
    names.push_back("David");
    print(names);

    vd doubles;
    doubles.push_back(1.1);
    doubles.push_back(2.2);
    print(doubles);
    
    return 0;
}