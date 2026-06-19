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