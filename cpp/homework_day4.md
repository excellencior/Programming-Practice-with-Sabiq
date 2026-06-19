# Homework (Variables, Arrays & 2D Arrays)

> **Due**: Before next class
> **Rules**: Try solving on your own first. If you're stuck, revisit the notes or today's code files. Google is allowed but copy-pasting is NOT!


## Part 1: Guess the Output

For each snippet below, **write down what you think the output will be** without running the code. Then run it to check.

### Q1.
```cpp
char letter = 'Z';
cout << letter << endl;
```

### Q2.
```cpp
string food = "Pizza";
cout << food[0] << endl;
cout << food[4] << endl;
```

### Q3.
```cpp
int x = 9.9;
cout << x << endl;
```

### Q4.
```cpp
string colors[] = {"Red", "Green", "Blue"};
cout << colors[2] << endl;
```

### Q5.
```cpp
int grid[][3] = {
    {10, 20, 30},
    {40, 50, 60}
};
cout << grid[1][0] << endl;
```


## Part 2: Write the Code

### Q6. Your Initials
Declare **three** `char` variables for the first letter of your first name, middle name, and last name. Print them side by side.

**Example Output** (if your name is John Adam Smith):
```
J A S
```

### Q7. Favorite Things Array
Create a `string` array called `favorites` containing your **5 favorite things** (movies, games, food — anything!). Then print the **first** and **last** item.

### Q8. Float vs Double
Create a `float` variable and a `double` variable, both storing the value `3.14159265358979`. Print both. Do you notice any difference? Write a comment in your code explaining why.

### Q9. Middle Character
Given this array:
```cpp
string words[] = {"Cat", "Elephant", "Hi"};
```
Write code that prints the **middle character** of `"Elephant"`. Use `.size()` and math — don't just hardcode the index!

### Q10. Build a 2D Array
Create a 2D integer array representing this table of marks:

| Subject | Test 1 | Test 2 |
|---------|--------|--------|
| Math    | 85     | 90     |
| Science | 78     | 88     |
| English | 92     | 95     |

Then print:
1. Your **Science Test 2** mark
2. Your **English Test 1** mark


## Part 3: Bug Hunt

Each snippet has a bug. **Find it, fix it, and explain what was wrong.**

### Q11.
```cpp
char grade = "A";
cout << grade << endl;
```

### Q12.
```cpp
string teams[2];
teams[0] = "Barcelona";
teams[1] = "Liverpool";
teams[2] = "Bayern";
```

### Q13.
```cpp
int nums[3] = {10, 20, 30};
cout << nums[3] << endl;
```


## Bonus Challenge (Optional)

### Q14. The Name Decoder
Given this 2D-style setup:
```cpp
string students[] = {"Alice", "Bob", "Charlie"};
```
Write code that prints the **last character** of **each** student's name. You haven't learned loops yet, so just write it out line by line (3 `cout` statements).

**Expected Output:**
```
e
b
e
```

---

**Good luck! Remember — making mistakes is how you learn. Don't be afraid to experiment!**
