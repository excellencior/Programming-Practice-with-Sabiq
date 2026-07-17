# Notes on Python and C++

We'll note the key features and differences between two programming languages **Python** and **C++**

## Code Execution
1. **Python** uses interpreter and **C++** uses compiler
2. **Python** code execution is slower than **C++** code execution
3. In **Python**, you need to write lesser *lines of code (LoC)* compared to **C++**

```C++
#include<iostream>
using namespace std;

void demo() {
    cout << "Demo Output" << endl;
}

// This is the main function where your program executes the very first time
int main() {
    cout << "Hello World" << endl;

    demo();

    return 0;
}
```

4. **Execution Order** \
Code execution in **C++** starts from the **main()** function. So, if you notice, in **python**, the code executes from *top-to-bottom order*, but in **C++**, compiler executes the **main()** function first, and if you call any function from this **main()**, that called function will get executed.
* See the code above, demo() will not be executed unless you call it from inside of **main()**


**Practice** \
Guess the output of the program below
```cpp
#include<iostream>
using namespace std;

void demo() {
    cout << "Demo Output" << endl;
    cout << 1 << endl;
}

int main() {
    cout << "Hello World" << endl;

    demo();

    cout << 0 << endl;
    
    return 0;
}
```

**Expected Output**
```
Hello World
Demo Output
1
0
```

**Homework** \
Write the equivalent python code for the C++ code above.


## Syntax

### Functions

```python
def main():
   # <Function body> 
```
```cpp
int main() {
    // <Function body>
}
```
**Differences**
1. In **python**, you don't need to specify the return type, but in **C++**, you need to do it. \
f.e. **int main() ....** <= basically means you are expecting an integer to be returned from this function. But in case of python **def main(): ....** <= you can return any type of data.
2. In **python**, using *4-spaces (tab)* you can write code for the function body. But in **C++**, you need to enclose your function body using **{...}**

### Strict Data Type Regulation
```cpp
int dummy = 5.5;
cout << dummy << endl;
```
What's the **output** will be? \
Let's break down the scenario. You are declaring an integer type of variable but the data you're assigning to that variable is not an integer, rather a float.
1. An integer variable
2. A floating point type data

**(C++) Output (whyyy??)**
```sh
5
```

But in **python**,
```python
dummy = 5.5
print(dummy)
```
**(Python) Output**
```sh
5.5
```

**Differences**
1. In C++, the type of the variable need to be declared properly. \
f.e. **int** var; \
But in python, it automatically assigns the type of the vaiable from the assigned datatype. \
f.e. var = 10 <= *Notice* there's no type declared before the variable name. Value assigned is 10, which is an integer, so python makes the type of the variable (**var**) an integer.

2. In **C++**, floats assigned to integer variables, looses the fractional part, only the integer part of the data is kept. \
When (**int dummy = 5.5;**) the dummy variable (which is of type integer) was assigned a float data (**5.5**), it only kept the integer part (**5**). That's the reason, we get **5** in the output.

### Strings
There's a basic difference between a python string and a cpp string.

```python
name1 = "John" # Valid
name2 = 'John' # Valid
```

```cpp
string name1 = "John"; // Valid
string name2 = 'John'; // Invalid, because single quotation means a character, not a string
```

Both in python and CPP, a string is an object, so you can call methods using this objects.

f.e. in Python:
```python
name = "John"
print(len(name))
```
and in cpp:
```cpp
string name = "John";
cout << name.size() << endl;
```

### Variables (continued)

#### Characters
In **C++**, use **single-quotation** marks for a character. You can only put **one** character inside single quotes.

```cpp
char ch = 'A'; // Valid
```

**Important**: A double-quoted single character (e.g. `"a"`) is **not** a char — it's a single-character **string**. So this is **invalid**:
```cpp
char ch = "a"; // Invalid! "a" is a string, not a char
```

#### double vs float
**double** has more data-holding capacity (precision) than **float**. Both store decimal numbers.

```cpp
float float_num = 5.5;
double double_num = 100.9;
```

#### Accessing Characters in a String
A **string is an array of characters**, so you can access individual characters using index `[]`.

```cpp
string name = "John"; // 4 letters, max index is 3
cout << name[0] << endl; // Output: J
```

You can get the max index using:
```cpp
int max_idx = name.size() - 1; // 3
```

### Arrays
In python these are known as **Lists**, but in CPP these are known as **Arrays**.

#### 1. Creating an Array

**Two ways to create an array:**

**a) Declare and initialize together**
```cpp
string fruits[] = {"Apple", "Orange", "Avocado", "Cherry", "Mango"};
```

**b) Declare first, populate later**
```cpp
string games[4]; // Must specify size
games[0] = "Football";
games[1] = "Cricket";
games[2] = "Hockey";
games[3] = "Basketball";
```

In **python**:
```python
fruits = ["Apple", "Orange", "Avocado", "Cherry", "Mango"]
```

#### 2. Reading an Array
Access elements using index `[]` (0-based), same as python.

```cpp
cout << fruits[0] << endl; // Apple
cout << games[2] << endl;  // Hockey
```

#### 3. Edge Cases with Array Size
When you specify a size like `[3]`, you **can't** add more than 3 elements.

```cpp
string teams[3];
teams[0] = "Argentina";
teams[1] = "Brazil";
teams[2] = "Ghana";
// teams[3] = "Cape Verde"; // NOT allowed, size > 3
```

If you use `[]` (no size) during initialization, **C++** automatically figures out the size — no bounding issues.

```cpp
string persons[] = {"John", "Amani", "Hubert"}; // Size auto-assigned to 3
```

#### 4. Arrays of Different Types
```cpp
int nums[] = {1, 2, 3, 4};
float floats[] = {1.2, 3.2, 5.5};
double doubles[] = {4.4, 6.5, 8.9, 1.2};
char chars[] = {'a', 'b', 'c'};
```

#### 5. Accessing Nested Data
Since a **string is an array of characters**, and you have an **array of strings**, you can chain indexes to access a specific character.

```cpp
string persons[] = {"John", "Amani", "Hubert"};
// Middle character of 2nd person's name ("Amani")
cout << persons[1][persons[1].size()/2] << endl; // 'a'
```

Breaking it down:
```cpp
string name = persons[1];           // "Amani"
int middle_idx = name.size() / 2;   // 5/2 = 2
char middle_char = name[middle_idx]; // 'a'
```

### 2D Arrays
A **2D array** is an **array of arrays**. Think of it as a **matrix** (rows and columns).

#### 1. Creating a 2D Array
```cpp
int arr[][2] = {
    {1, 2}, {3, 4}, {5, 6}
};
```
- `[]` — outer array (rows), size auto-assigned
- `[2]` — inner arrays (columns), all must be **same size**

Visualized as a matrix:
```
1, 2   <- Row-0
3, 4   <- Row-1
5, 6   <- Row-2
^  ^
|  |
Col-0  Col-1
```

**Note**: In human language we say Row-1, Col-1. In computer language (0-indexed) that's Row-0, Col-0.

#### 2. Reading a 2D Array
Use **two indexes**: `arr[row][col]`

```cpp
cout << arr[1][1] << endl; // Output: 4 (Row-2 Col-2 in human language)
```

### User Input (cin)
In **python**, you use `input()` to take user input. In **C++**, you use `cin`.

```python
name = input("Please enter your name: ")
```
```cpp
string name;
cout << "Please enter your name: ";
cin >> name;
cout << "Your name is: " << name << endl;
```

**Key difference**: In **python**, `input()` prints the prompt and reads the value in one line. In **C++**, you first print the prompt using `cout`, then read the value using `cin >>`.

### If / Else

#### Syntax
```python
if condition:
    ...
elif condition:
    ...
else:
    ...
```
```cpp
if (condition) {
    ...
} else if (condition) {
    ...
} else {
    ...
}
```

**Differences**
1. In **python**, you use `elif`. In **C++**, you use `else if`.
2. In **C++**, conditions go inside **parentheses** `()` and the body goes inside **curly braces** `{}`.

#### True and False in C++
In **python**, `True` / `False` are just boolean values. But in **C++**:
- **0** is considered **false**
- Any **non-zero** value is considered **true**

```cpp
if (0) {
    cout << "Will NOT print" << endl; // 0 = false
}

if (-4) {
    cout << "WILL print" << endl; // -4 is non-zero = true
}
```

#### Comparing Values
You can use `==` to compare values, just like in python.

```cpp
string name;
cout << "Please enter your name: "; cin >> name;
if (name == "John") {
    cout << "Good morning, John!" << endl;
} else if (name == "David") {
    cout << "How are you, David?" << endl;
} else {
    cout << "Good morning to me!!" << endl;
}
```

#### Not Operator (!)
The `!` operator **inverts** a boolean value. Same as `not` in python.

```cpp
if (!false) {
    cout << "This is not false" << endl; // Will print, because !false = true
}
```

### Loops

#### For Loop
```python
for i in range(4):
    print(i)
```
```cpp
for (int i = 0; i < 4; i++) {
    cout << i << endl;
}
```

A **C++ for loop** has 3 parts: `for (declaration; condition; increment)`
1. **Declaration** — create an index variable (e.g. `int i = 0`). This variable only exists **inside** the loop.
2. **Condition** — the loop runs as long as this is true (e.g. `i < 4`).
3. **Increment** — what happens after each step (e.g. `i++` means i = i + 1).

**Example**: Print the last character of each student's name.
```cpp
string students[] = {"Alice", "Bob", "Charlie", "Cameron"};
for (int i = 0; i < 4; i++) {
    int last_idx = students[i].size() - 1;
    cout << students[i][last_idx] << endl;
}
```

#### While Loop
```python
i = 0
while i < 4:
    print(i)
    i += 1
```
```cpp
int i = 0;
while (i < 4) {
    cout << i << endl;
    i++;
}
```

**Difference from for loop**: In a while loop, you declare the variable **before** the loop, and increment it **inside** the loop body.

**Example**: Take names from user input and print them.
```cpp
int limit = 4, i = 0;
string name;
string names[limit];
while (i < limit) {
    cout << (i+1) << ". Please enter your name: "; cin >> name;
    names[i] = name;
    i++;
}
```

#### break and continue
- **break** — stops the loop completely and exits out of it.
- **continue** — skips the rest of the current step and jumps to the next step.

```cpp
while (true) { // Infinite loop
    string cmd;
    cout << "Enter Yes/No/Exit: "; cin >> cmd;

    if (cmd == "Exit") {
        break; // Stop the loop
    } else if (cmd == "Invalid") {
        continue; // Skip everything below, go to next step
    }

    cout << "You entered: " << cmd << endl;
}
```

In **python**, `break` and `continue` work the **exact same way**.

### Functions (in detail)

We touched on functions earlier, but let's go deeper now.

#### Syntax
```python
def greet(name):
    print("Hello " + name)
```
```cpp
void greet(string name) {
    cout << "Hello " << name << endl;
}
```

A **C++ function** looks like this:
```
<return-type> <function-name>(param-list) {
    ... function body ...
    return <value>;
}
```

#### Return Types
The return type tells C++ what kind of data the function gives back.

- **void** — the function doesn't return anything, it just does something (like printing).
- **int** — the function returns an integer.
- **bool** — the function returns true or false.
- **string** — the function returns a string.

In **python**, you don't need to specify a return type. The function can return anything or nothing.

#### Functions with bool Return Type
A `bool` function is useful when you need to check a condition.

```cpp
bool isEven(int num) {
    return num % 2 == 0; // If remainder is 0, it's even (true), otherwise false
}
```

You can use it like this:
```cpp
for (int i = 1; i <= 40; i++) {
    if (isEven(i)) cout << i << " is even" << endl;
}
```

Another example, checking if a number is prime:
```cpp
bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false; // Divisible by something other than 1 and itself
    }
    return true;
}
```

The algorithm: divide the number by every number from 2 to num-1. If any of them divides it evenly, it's not a prime.

#### Passing Arrays to Functions
You can pass an array to a function. But you also need to pass the **size**, because C++ doesn't know the array size inside the function.

```cpp
int sum(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i];
    }
    return s;
}
```

Calling it from main:
```cpp
int arr1[] = {1, 2, 3, 4};
cout << sum(arr1, 4) << endl; // Output: 10
```

In **python**, you don't need to pass the size because `len()` works inside the function.

#### Ternary Operator
A shortcut for simple if/else that returns a value.

```cpp
// Long way
if (num % 2 == 0) return true;
else return false;

// Short way using ternary
return num % 2 == 0 ? true : false;
```

The format is: `<condition> ? <value if true> : <value if false>`

In **python**, the equivalent is: `True if num % 2 == 0 else False`

### Nested Function Calls

A function can call another function, which can call another function, and so on. Think of it like **Russian dolls** — you open one doll and there's a smaller doll inside.

```cpp
void cprint(int dollNo) {
    cout << "You opened doll - " << dollNo << endl;
}

void openDoll3(int i) {
    cprint(i);
    // No more dolls to open
}

void openDoll2(int i) {
    cprint(i);
    openDoll3(i+1); // Opens the next doll
}

void openDoll1(int i) {
    cprint(i);
    openDoll2(i+1); // Opens the next doll
}
```

Calling `openDoll1(1)` will print:
```
You opened doll - 1
You opened doll - 2
You opened doll - 3
```

This works, but writing a separate function for each doll is not practical. What if you have 100 dolls? That's where **recursion** comes in.

### Recursion

Recursion is when a **function calls itself**. It's like having one `openDoll` function that keeps opening the next doll until there are no more dolls left.

```cpp
void recurOpenDoll(int i) {
    if (i == 4) { // Base condition: stop here
        cout << "There's no doll anymore" << endl;
        return; // Stop and start going back
    }

    cprint(i);
    recurOpenDoll(i+1); // Call itself with the next doll number
}
```

Two important things about recursion:
1. **Base condition** — the condition that tells the function to **stop calling itself**. Without this, it would run forever (and crash).
2. **Recursive call** — the function calls itself with a slightly different input (usually moving closer to the base condition).

In **python**, recursion works the same way:
```python
def recur_open_doll(i):
    if i == 4:
        print("There's no doll anymore")
        return
    print(f"You opened doll - {i}")
    recur_open_doll(i + 1)
```

### Nested Loops

You can put a loop inside another loop. This is very useful for working with **2D arrays**.

#### Printing a 2D Array
```cpp
int arr[][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8}
};

for (int i = 0; i < 2; i++) {         // Loop through rows
    for (int j = 0; j < 4; j++) {     // Loop through columns
        cout << arr[i][j] << ' ';
    }
    cout << endl;
}
```

**Output:**
```
1 2 3 4
5 6 7 8
```

The outer loop goes through each **row**. For each row, the inner loop goes through each **column**. This is how you visit every single element in a 2D array.

#### Mixing While and For Loops
You can mix different types of loops. Here's an example that takes attendance for multiple classes:

```cpp
string students[][4] = {
    {"Alan", "John", "Bob", "Rick"},   // class 1
    {"Kirk", "Josh", "Max", "Clip"}    // class 2
};
int attendance[2][4];
int classNo = 0;

while (classNo < 2) {                  // While loop for classes
    for (int id = 0; id < 4; id++) {   // For loop for students
        if (id % 2 == 0) {
            attendance[classNo][id] = 1; // Present
        } else {
            attendance[classNo][id] = 0; // Absent
        }
    }
    classNo++;
}
```

Then print the attendance:
```cpp
for (int i = 0; i < 2; i++) {
    cout << "Class-" << i+1 << ": ";
    for (int j = 0; j < 4; j++) {
        cout << attendance[i][j] << ' ';
    }
    cout << endl;
}
```

**Output:**
```
Class-1: 1 0 1 0
Class-2: 1 0 1 0
```

### STL (Standard Template Library)

**STL** stands for **Standard Template Library**. Think of a library as a storage of knowledge that you can use for various tasks. In C++, STL gives you ready-made data structures (like vectors, sets, maps etc.) with built-in functions.

In **python**, you already have lists, sets, dictionaries etc. built into the language. In **C++**, you get similar things through STL, but you need to `#include` them.

### Vectors

A **vector** is like an array, but smarter. The key differences:

1. You **don't need to specify the size** before using it. It grows and shrinks on its own.
2. It has **dynamic memory allocation**, meaning it allocates more memory as you keep adding data.
3. It comes with **built-in functions** like `push_back()`, `pop_back()`, `size()`, etc.

You need to `#include <vector>` to use vectors.

#### Declaring a Vector
```cpp
vector<int> vec;         // Empty integer vector
vector<string> names;    // Empty string vector
```

Compare to arrays:
```cpp
int arr[10];             // Must specify size
```

In **python**, this is just a list:
```python
vec = []
```

#### Adding Data (push_back)
```cpp
vec.push_back(1); // [1]
vec.push_back(2); // [1, 2]
vec.push_back(3); // [1, 2, 3]
```

In **python**: `vec.append(1)`

#### Removing Data (pop_back)
`pop_back()` removes the **last** element.

```cpp
vec.pop_back(); // [1, 2, 3] => [1, 2]
vec.pop_back(); // [1, 2] => [1]
```

#### Accessing Data
Just like arrays, use index `[]`:
```cpp
vec[0] = 100; // Modify first element
cout << vec[0] << endl; // Read first element
```

You can also use:
```cpp
cout << vec.front() << endl; // First element
cout << vec.back() << endl;  // Last element
```

#### Checking if Empty
Before doing operations like `pop_back()`, it's good practice to check if the vector is empty:
```cpp
if (!vec.empty()) {
    vec.pop_back();
}
```

#### Initializing with Values
```cpp
vector<int> nums = {1, 2, 3, 4};
```

#### Clearing Everything
```cpp
nums.clear(); // Removes all elements, vector is now empty
```

#### Taking User Input into a Vector
```cpp
int n = 5;
vector<int> data;
for (int i = 0; i < n; i++) {
    int x; cin >> x;
    data.push_back(x);
}
```

#### Vectors of Different Types
```cpp
vector<float> fvec;
fvec.push_back(3.14);

vector<string> stvec;
stvec.push_back("Sabiq");
stvec.push_back("John");
```

#### 2D Vectors
A vector of vectors, just like a 2D array but dynamic.

```cpp
vector<vector<int>> grid;
vector<int> row1 = {1, 2};
vector<int> row2 = {3, 4};
grid.push_back(row1);
grid.push_back(row2);
```

### Enhanced For Loop

A shorter way to loop through STL containers (vectors, sets, etc). Instead of using an index, you directly get each element.

```cpp
// Regular for loop
for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << ' ';
}

// Enhanced for loop (does the same thing, but cleaner)
for (int v: vec) {
    cout << v << ' ';
}
```

In **python**, this is just the normal for loop:
```python
for v in vec:
    print(v)
```

Works with any data type:
```cpp
for (string name: names) { ... }
for (float f: floats) { ... }
```

### Function Overloading

In **C++**, you can have **multiple functions with the same name** as long as they take **different parameter types**. The compiler figures out which one to call based on what you pass.

```cpp
void print(vector<int> vec) {
    for (int v: vec) cout << v << ' ';
    cout << endl;
}

void print(vector<string> stvec) {
    for (string v: stvec) cout << v << ' ';
    cout << endl;
}

void print(vector<vector<int>> vec2d) {
    for (vector<int> row: vec2d) {
        print(row); // Calls the vector<int> version
    }
}
```

Now you can call `print()` with any of these types and C++ picks the right one. This is **not possible in python** since python doesn't have strict types.

### Sets

A **set** stores **unique** data only (no duplicates) and keeps elements **sorted automatically**.

You need to `#include <set>` to use sets.

In **python**, sets work very similarly:
```python
s = set()
s.add(3)
```

#### Declaring a Set
```cpp
set<int> nums;
```

#### Inserting Data
```cpp
nums.insert(3);
nums.insert(4);
nums.insert(5);
nums.insert(5); // Duplicate, will be ignored
nums.insert(2); // Will be placed in sorted position
// nums is now: {2, 3, 4, 5}
```

Notice: even though we inserted 5 twice, the set only keeps one copy. And even though 2 was inserted last, the set sorts it to the front.

#### Removing Data
```cpp
nums.erase(4); // Removes the value 4
// nums is now: {2, 3, 5}
```

#### Checking if Empty and Clearing
```cpp
if (!nums.empty()) {
    nums.erase(3);
}

nums.clear(); // Removes everything
```

#### Finding Data
```cpp
auto itr = nums.find(3);
if (itr != nums.end()) {
    cout << "Found: " << *itr << endl;
} else {
    cout << "Not found" << endl;
}
```

`find()` returns an **iterator** (a pointer-like thing). If the element is not found, it returns `set.end()`. We'll learn more about iterators and pointers later.

### The auto Keyword

`auto` lets C++ **figure out the type for you** automatically based on the value you assign.

```cpp
auto a = 10;       // int
auto b = 10.10;    // double
auto c = "John";   // const char* (a C-style string)
```

It's especially useful when the type is long or complex, like with iterators:
```cpp
auto itr = nums.find(3); // Instead of writing: set<int>::iterator itr = nums.find(3);
```

In **python**, every variable is basically `auto` since you never specify types.


## Terminal Commands to run the Sciprts
For python, it's the simplest there is:
```bash
python <python_script_name>
```

for CPP:
```bash
g++ <cpp_sciprt_name> -o main
./main
```
You first need to create an object by executing your CPP code first, then execute your object in the OS