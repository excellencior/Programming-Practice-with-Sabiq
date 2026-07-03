#include<iostream>
using namespace std;

int main() {
    // Task: We will first create a 2D array and then use a loop (loops) to print it.

    int arr[][4] = {
        {1, 2, 3, 4}, // i=0, j=0,1,2,3
        {5, 6, 7, 8} // i=1, j=0,1,2,3
    };

    // Nested Loops
    for (int i=0; i<2; i++) {
        for (int j=0; j<4; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    // Task: Go through a student list to take attendance

    string students[][4] = {
        {"Alan", "John", "Bob", "Rick"}, // class 1
        {"Kirk", "Josh", "Max", "Clip"} // class 2
    };
    int attendance[2][4];
    int classNo = 0;
    // Mixing Loops
    cout << "\nAttendance" << endl;
    while (classNo < 2) { // Loops though the classes
        // For each class, take attendance
        for (int id=0; id<4; id++) {
            if (id % 2 == 0) {
                attendance[classNo][id] = 1;
            } else {
                attendance[classNo][id] = 0;
            }
        }
        classNo++;
    }

    for (int i=0; i<2; i++) {
        cout << "Class-"  << i+1 << ": ";
        for (int j=0; j<4; j++) {
            cout << attendance[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}