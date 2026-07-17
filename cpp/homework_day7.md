# Homework on CPP STL (Vectors, Sets)

> **Due**: Before next class
> **Rules**: Try solving on your own first. You can revisit the notes and class code files if you get stuck. Google is your friend, but don't copy-paste solutions. Write every line yourself.

Today we learned about the **Standard Template Library (STL)** in C++. Vectors and sets are part of STL. They're like arrays but smarter. They come with built-in functions and you don't need to worry about size. Remember to `#include <vector>` and `#include <set>` at the top of your code.


## Q1. Guess the Output

What will each snippet print? Write your answer first, then run it to check.

**a)**
```cpp
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.pop_back();
for (int x: v) {
    cout << x << ' ';
}
cout << endl;
```

**b)**
```cpp
set<int> s;
s.insert(5);
s.insert(3);
s.insert(5);
s.insert(1);
for (int x: s) {
    cout << x << ' ';
}
cout << endl;
```

**c)**
```cpp
vector<int> v = {4, 8, 15, 16, 23};
cout << v.front() << endl;
cout << v.back() << endl;
cout << v[2] << endl;
```

**d)**
```cpp
set<int> s;
s.insert(10);
s.insert(20);
s.erase(10);
s.insert(30);
cout << s.size() << endl;
```


## Q2. Build a Shopping List

Create a `vector<string>` to store a shopping list. Your program should:

1. Ask the user to enter **5 items** one by one and add each to the vector using `push_back()`
2. Print all the items using an **enhanced for loop** (`for (string item: list)`)
3. Remove the last item using `pop_back()`
4. Print the updated list again

**Example:**
```
Enter item 1: Milk
Enter item 2: Eggs
Enter item 3: Bread
Enter item 4: Butter
Enter item 5: Rice

Your shopping list:
Milk Eggs Bread Butter Rice

Removed last item!

Updated list:
Milk Eggs Bread Butter
```


## Q3. Unique Numbers

The **set** automatically ignores duplicates. Use this to your advantage.

Take **8 integers** from the user. Store them in a `set<int>`. After all inputs, print how many **unique** numbers were entered and print them all.

**Example:**
```
Enter 8 numbers:
5 3 5 7 3 9 7 1

Unique count: 5
Unique numbers: 1 3 5 7 9
```

Notice how the set also **sorts** them automatically.


## Q4. Vector Sum Function

Write a function called `int vectorSum(vector<int> vec)` that takes a vector of integers and returns the **total sum** of all elements.

Unlike arrays, you **don't** need to pass the size separately. You can use `vec.size()` inside the function.

Test it in `main()`:
```cpp
vector<int> nums = {10, 20, 30, 40, 50};
cout << "Sum: " << vectorSum(nums) << endl;
```

**Expected Output:**
```
Sum: 150
```

**Hint**: Loop through the vector using an enhanced for loop and keep adding each value to a running total.


## Q5. Remove Duplicates from Input

Take **10 integers** from the user and store them in a **vector**. Then, use a **set** to remove duplicates. Finally, print the cleaned list.

This problem combines both vector and set together.

**Example:**
```
Enter 10 numbers: 4 2 7 2 4 9 7 1 3 1

After removing duplicates: 1 2 3 4 7 9
```

**Hint**: Insert all vector elements into a set. The set will automatically throw away duplicates and sort them.


## Q6. 2D Vector

Create a 2D vector (a vector of vectors) representing this table:

```
1  2  3
4  5  6
7  8  9
```

Write a function `void print2D(vector<vector<int>> grid)` that prints it row by row.

**Hint**: A 2D vector is declared like this:
```cpp
vector<vector<int>> grid;
```

You can create each row as a separate `vector<int>` and push it into the grid, just like we did in class.


## Q7. Is It in the Set?

Create a `set<string>` containing 5 of your favorite fruits. Then ask the user to enter a fruit name and check whether it exists in the set using `.find()`.

If found, print `"Yes, <fruit> is in the list!"`. Otherwise, print `"No, <fruit> is not in the list."`.

**Hint**: `set.find(value)` returns `set.end()` if the value is **not found**. So your check looks like:
```cpp
if (fruits.find(name) != fruits.end()) {
    // found
} else {
    // not found
}
```


## Bonus: Student Grade Tracker

Combine everything you've learned. Write a program that:

1. Asks the user how many students there are (store in `int n`)
2. For each student, take their **name** (store in a `vector<string>`) and **grade** (store in a `vector<int>`)
3. After all inputs, print:
   - All student names with their grades
   - The **highest** grade and who scored it
   - The number of **unique** grades (use a set)

**Example:**
```
How many students? 4
Name: Alice, Grade: 90
Name: Bob, Grade: 85
Name: Charlie, Grade: 90
Name: David, Grade: 78

Results:
1. Alice - 90
2. Bob - 85
3. Charlie - 90
4. David - 78

Highest grade: 90 (Alice)
Unique grades: 3
```

This one is a bit longer, but you have all the tools to solve it. Take it step by step.


**Take your time with these. Vectors and sets will be your best friends going forward. See you in the next class!**
