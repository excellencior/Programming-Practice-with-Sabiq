#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

template<typename T1, typename T2>
void printMap(map<T1, T2> gmap) {
    // for (auto data = gmap.begin(); data!=gmap.end(); data++) {
    //     cout << (*data).first << ' ' << (*data).second << endl;
    // }
    // 1, 2, 3, 4 <- map
    // 1.pos -> map.begin() -> data (it's a position, in short a memory address)
    // data++ -> You are moving from the current memory address to the next address
    // data != map.end() -> Keep on moving to the next address until you hit the last address which is map.end()
    
    // Using an enhanced for loop
    for (auto data: gmap) {
        cout << data.first << ' ' << gmap.at(data.first) << endl;
    } 
    // data.first => key
    // data.second => gmap.at(key) => gmap.at(data.first) => value
}

template<typename T1, typename T2>
void printUMap(unordered_map<T1, T2> gumap) {
    for (auto data: gumap) {
        cout << data.first << ' ' << data.second << endl;
    }
}

void checkExistsUsingFind(map<string, int> gmap, string data) {
    if (gmap.find(data) != gmap.end()) {
        cout << "Found " << data << endl;
    } else {
        cout << "Didn't find " << data << endl;
    }
}

void checkExistsUsingCount(map<string, int> gmap, string data) {
    if (gmap.count(data) != 0) {
        cout << "Found " << data << endl;
    } else {
        cout << "Didn't find " << data << endl;
    }
}

int main() {
    // MAP
    // You can store values against a key in the map

    map<string, int> db;

    // 1. Insert
    // a.
    db["John"] = 100;
    // Basically you assigned the data 100 to the key (string) "John"
    cout << db["John"] << endl;

    // b.
    db.insert({"Mary", 200}); // Equivalent to writing db["Mary"] = 200
    // or
    db.insert(make_pair("Bob", 300));

    printMap(db);
    
    // 2. Checking a data exists in the map or not
    // Task: Check whether there's a data entry for Bob, Alan or not
    checkExistsUsingFind(db, "Bob");
    checkExistsUsingFind(db, "Alan");
    // An easier alternative
    // using .count(...)
    checkExistsUsingCount(db, "Bob");
    checkExistsUsingFind(db, "Alan");

    // 3. Removing data
    db.erase("Bob");
    printMap(db);

    // 4. Clearing data
    db.clear();
    printMap(db); // Won't print anything as there's no data in the map now

    if (db.empty()) {
        cout << "There's no data in the map" << endl;
    } else {
        cout << "There's data in the map" << endl;
    }

    // map -> Automatically sorts the keys
    // unordered_map -> Doesn't automatically sort the keys
    // unordered_map<string, int> umap({ {"John", 10}, {"Bob", 20}, {"Mary", 30} });
    unordered_map<string, int> umap;
    umap["John"] = 10; // This is the last element of the unordered map
    umap["Bob"] = 40;
    umap["Mary"] = 30;
    umap["Alan"] = 20; // This is the first element of the unordered map
    printUMap(umap);
    
    return 0;
}