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
