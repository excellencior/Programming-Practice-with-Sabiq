# Homework (Pairs, Templates, Type Aliases & Algorithms)

> **Due**: Before next class
> **Rules**: Try solving on your own first. You can revisit the notes and class code files if you get stuck. Google is your friend, but don't copy-paste solutions. Write every line yourself.

Today's class introduced some powerful tools. Pairs let you group two values together, templates make your functions work with any data type, type aliases save you from typing long names, and the `<algorithm>` library gives you ready-made functions for sorting, counting, and more.


## Q1. Guess the Output

Write your answer first, then run it to check.

**a)**
```cpp
pair<string, int> p = {"Alice", 25};
cout << p.first << " is " << p.second << " years old" << endl;
```

**b)**
```cpp
pair<string, int> p = {"Bob", 10};
p.first = "Charlie";
p.second = 20;
cout << p.first << ' ' << p.second << endl;
```

**c)**
```cpp
vector<int> v = {5, 3, 8, 1, 4};
sort(v.begin(), v.end());
cout << v[0] << ' ' << v[4] << endl;
```

**d)**
```cpp
vector<int> v = {3, 7, 3, 9, 3, 1};
cout << count(v.begin(), v.end(), 3) << endl;
```

**e)**
```cpp
vector<string> v = {"Cat", "Dog", "Bird"};
reverse(v.begin(), v.end());
for (string s: v) cout << s << ' ';
cout << endl;
```


## Q2. Student Pair

Create a `pair<string, int>` for a student where `first` is the student's name and `second` is their age. Create it in all three ways we learned:

```cpp
// a) Constructor
pair<string, int> s1("Name", age);

// b) Brace initialization (recommended)
pair<string, int> s2 = {"Name", age};

// c) make_pair
auto s3 = make_pair("Name", age);
```

Print all three using `p.first` and `p.second`.


## Q3. Type Alias Cleanup

The following code works but uses long type names everywhere. Rewrite it using type aliases (`using`) to make it cleaner.

```cpp
vector<int> ids = {1, 2, 3};
vector<string> names = {"John", "Mary", "Tim"};
vector<pair<string, int>> students;
students.push_back({"John", 1});
students.push_back({"Mary", 2});
```

**Hint**: Define aliases like:
```cpp
using vi = vector<int>;
using vs = vector<string>;
using vps = vector<pair<string, int>>;
```
Then replace the long type names with your short ones.


## Q4. Template Print Function

In the last homework, you had to write separate `print()` functions for `vector<int>`, `vector<string>`, etc. Now write a **single** template function that works for any vector type.

```cpp
template<typename T>
void print(vector<T> v) {
    // your code here
}
```

Test it with:
```cpp
vector<int> nums = {1, 2, 3};
vector<string> names = {"Alice", "Bob"};
vector<double> prices = {9.99, 4.50, 12.75};

print(nums);
print(names);
print(prices);
```


## Q5. Sort and Find

Given this vector:
```cpp
vector<int> scores = {88, 45, 92, 67, 73, 55, 92, 81};
```

Using functions from `<algorithm>`, write code that:
1. Sorts the vector in ascending order (`sort`)
2. Prints the sorted vector
3. Prints the **maximum** element (`max_element`)
4. Prints how many times **92** appears (`count`)

**Expected Output:**
```
Sorted: 45 55 67 73 81 88 92 92
Max: 92
Count of 92: 2
```


## Q6. Custom Sort (Descending)

Sort a `vector<string>` of names in **reverse alphabetical order** (Z to A) using a custom comparator function.

```cpp
bool compare(string a, string b) {
    return a > b; // This makes it sort in descending order
}
```

Test with:
```cpp
vector<string> names = {"Charlie", "Alice", "Bob", "David"};
sort(names.begin(), names.end(), compare);
```

**Expected Output:**
```
David Charlie Bob Alice
```


## Q7. Sort Students by ID

Create a `vector<pair<string, int>>` with at least 4 students (name and student ID). Write a custom comparator function to sort them by their **student ID** (the `second` value of the pair).

**Example:**
```
Before sorting:
Mary 2
David 3
John 1
Tim 4

After sorting by ID:
John 1
Mary 2
David 3
Tim 4
```

**Hint**: Your comparator should compare `a.second` and `b.second`.


## Q8. Pairs in a Set

Create a `set<pair<string, int>>` with some student pairs. Then:
1. Print all students (notice how the set sorts them by the `first` value, alphabetically)
2. Erase one student using `set.erase({"Name", id})`
3. Print again to confirm removal

Remember, a set of pairs sorts by `first` value first, then by `second` if `first` is the same.


## Q9. Template Display Function

Write a template function `display` that takes **two parameters of potentially different types** and prints them separated by a space.

```cpp
template<typename T1, typename T2>
void display(T1 a, T2 b) {
    // your code here
}
```

Test it with different type combinations:
```cpp
display("John", 1);        // string and int
display(50, 50);            // int and int
display("John", "Mary");   // string and string
display(50, 50.5);          // int and double
display(4, 'A');            // int and char
```


## Explore on Your Own

The `<algorithm>` library has many more useful functions beyond `sort`, `count`, `max_element`, and `reverse`. Here are a few worth looking up. Try using at least 2 of them in a small test program:

- `min_element(begin, end)` — finds the smallest element
- `find(begin, end, value)` — searches for a value and returns an iterator to it
- `accumulate(begin, end, initial_value)` — adds up all elements (needs `#include <numeric>`)
- `binary_search(begin, end, value)` — checks if a value exists in a **sorted** container (returns true/false)
- `swap(a, b)` — swaps two values

You can search "C++ algorithm library" online to discover even more. The more of these you know, the less code you have to write yourself.



## Final Challenge: Who is the Football GOAT?

This one brings everything together. You're going to settle the greatest debate in football — who is the **GOAT**? But instead of arguing, you'll let the numbers decide.

Goals alone don't make a GOAT. A true GOAT creates chances, wins trophies, and dominates on the biggest stage. So we'll use a **GOAT Score** formula:

```
GOAT Score = Goals + Assists + (Trophies x 5) + (Ballon d'Ors x 50) + (World Cups x 100)
```

Here are the real stats for 8 legends as of 2026 (use these as your test data):

| Player | Goals | Assists | Trophies | Ballon d'Ors | World Cups |
|--------|-------|---------|----------|--------------|------------|
| Messi  | 919   | 410     | 46       | 8            | 1          |
| CR7    | 974   | 307     | 35       | 5            | 0          |
| R9     | 342   | 70      | 20       | 2            | 2          |
| Neymar | 352   | 286     | 30       | 0            | 0          |
| Salah  | 334   | 119     | 8        | 0            | 0          |
| Mbappe | 392   | 120     | 20       | 0            | 1          |
| Modric | 70    | 180     | 30       | 1            | 0          |
| Kane   | 463   | 90      | 4        | 0            | 0          |

**Your program should:**

1. Define type aliases at the top:
   - `using Player = pair<string, int>;` (name and GOAT score)
   - `using Leaderboard = vector<Player>;`

2. Write a **template print function** that can print any `vector<pair<a, b>>`

3. For each player, take their **name**, **goals**, **assists**, **trophies**, **ballon d'ors**, and **world cups** using `cin`. Calculate the GOAT Score using the formula above, and store the result as a `Player` pair (name + goat score) in a `Leaderboard` vector

4. Print the leaderboard **before sorting** (as entered)

5. Write a custom comparator function `compareByScore` that sorts players by GOAT Score in **descending order** (highest first). If two players have the same score, sort by name alphabetically

6. Sort the leaderboard using your comparator and print it again

7. Using `<algorithm>` functions, print:
   - The **GOAT** (the player with the highest score, first after sorting)
   - The **lowest ranked** player
   - The difference in score between the GOAT and the 2nd place

**Example run:**
```
How many players? 8
Enter name, goals, assists, trophies, ballon-dors, world-cups:
Messi 919 410 46 8 1
CR7 974 307 35 5 0
R9 342 70 20 2 2
Neymar 352 286 30 0 0
Salah 334 119 8 0 0
Mbappe 392 120 20 0 1
Modric 70 180 30 1 0
Kane 463 90 4 0 0

--- Before Sorting ---
Messi 2059
CR7 1706
R9 812
Neymar 788
Salah 493
Mbappe 712
Modric 450
Kane 573

--- GOAT Leaderboard ---
Messi 2059
CR7 1706
R9 812
Neymar 788
Mbappe 712
Kane 573
Salah 493
Modric 450

The GOAT is: Messi (2059 points)
Lowest ranked: Modric (450 points)
Gap between #1 and #2: 353 points
```

Let's break down why Messi wins:
- **Messi**: 919 + 410 + (46x5) + (8x50) + (1x100) = **2059**
- **CR7**: 974 + 307 + (35x5) + (5x50) + (0x100) = **1706**
- **Mbappe**: 392 + 120 + (20x5) + (0x50) + (1x100) = **712** (still young, has time!)
- **Kane**: 463 + 90 + (4x5) + (0x50) + (0x100) = **573** (500+ goals but almost no trophies hurts)
- **Modric**: 70 + 180 + (30x5) + (1x50) + (0x100) = **450** (greatest midfielder ever, but this formula favors goal scorers)

CR7 has 55 more career goals, but Messi's 103 extra assists, 11 more trophies, 3 more Ballon d'Ors, and that 2022 World Cup put him 353 points clear. The complete player wins.

Modric's low score shows the limits of this formula. He's arguably the greatest midfielder of all time, but a formula built around goals and assists doesn't capture his true impact. Feel free to tweak the formula or add categories like "key passes" or "Champions League titles" to make it fairer!

This is how rating systems work in FIFA, football analytics, and fantasy leagues. Have fun building it, and feel free to add your own players!


**These concepts might feel abstract at first, but they make your code shorter, cleaner, and more powerful. Take your time and see you in the next class!**
