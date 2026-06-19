#include<iostream>
using namespace std;

int main() {
    // 2D arrays (array of arrays)
    
    // 1. Create a 2D array 
    int arr[][2] = {
        {1, 2}, {3, 4}, {5, 6}
    }; // you can put arrays into an array

    // arr => {1, 2, 3}
    // arr of arrs => { {1, 2}, {3, 4}, {5, 6} }

    // arr[][2]
    // arr[] <== The outer array []
    // arr[][2] <== The inner array [2]
    // You are creating an array of arrays. In this case, the inner arrays all should have the same size (2). You can add as many entries as you want to the outer array as you didn't specify a size ([]).

    // If you organize it properly, it will look like a matrix
    // 1, 2 <- Row-1 (in human language), Row-0 (in computer language)
    // 3, 4
    // 5, 6
    // ^
    // |
    // Col-1 (in human language), Col-0 (in computer language)

    // So, from the "arr", you can say that you are creating a matrix of size 3 rows and 2 columns

    // 2. Read a 2D array
    // In human language: Access the data at Row-2, Col-2 or in short (2,2)
    // In computer language: Access the data at Row-1, Col-2 or in short (1,1)
    cout << "The data at Row-2, Col-2 (or Row-1, Col-1) is: " << arr[1][1] << endl; 

    return 0;
}