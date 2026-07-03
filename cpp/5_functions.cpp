#include<iostream>
using namespace std;

// How a function looks in CPP
// <return-type> <function-name> (param-list) {
//  ... function body ...
// return <value>;
// }
void greet(string hello) {
    cout << hello << endl;
}

bool isEven(int num) {
    // Typical implementation
    // if (num % 2 == 0)
    //     return true;
    // return false;
    
    // return num%2 == 0;
    // If the remainder = 0, the condition is true, so basically its "return true", otherwise its "return false"
     
    // Another alternative
    // Using ternary-operator: <check-condition> ? <return if true> : <return if false>
    return num%2 == 0 ? true : false;
}

bool isPrime(int num) {
    // Algorithm: We start dividing the number by 2 and continue dividing it by all the numbers from 2 to num-1. If any number other than 1 or num is able to divide it, it means, num is not a prime.
    for (int i=2; i<num; i++) {
        if (num % i == 0) return false;
    }

    return true;
}

int sum(int arr[], int n) {
    int s = 0;
    for (int i=0; i<n; i++) {
        s += arr[i];
    }

    return s; // Final sum of the elements of the array
}

int main() {
    // Function: Improves code reusability. Other parts of the code, can just call it to do something.

    // Task: Print "Hello, Good Morning!" in the console using a function.
    greet("Hello, Good Morning"); // Notice that this function isn't returning anything, but is being used to just pring something in the console

    // Need to print it 6 times
    for (int i=0; i<6; i++) greet("Hello, Good Morning");

    // Task: Print all the Even numbers from 1 to 40
    for (int i=1; i<=40; i++) {
        if (isEven(i)) cout << i << " is even" << endl;
    }

    // Task: Print all the primes from 1 to 20
    // 7 is only divisible by 1 or 7 and nothing else (so its a prime)
    // 8 is divisible by 1, 2, 4, 8 (so its not a prime)
    // 9 is divisible by 1, 3, 9 (so its not a prime)
    // 8 = 1 x 8
    // 8 = 2 x 4
    cout << "\nPrimes 1-20:" << endl;
    for (int num=1; num<=20; num++) {
        if (isPrime(num)) cout << num << endl;
    }

    cout << "\nSum operations" << endl;
    int arr1[] = {1, 2, 3, 4}; // size = 4
    cout << sum(arr1, 4) << endl;

    int arr2[] = {1, 2, 3, 4, 5, 6}; // size = 6
    cout << sum(arr2, 6) << endl;
    
    return 0;
}