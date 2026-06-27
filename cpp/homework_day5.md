# Homework (User Input, If/Else & Loops)

> **Due**: Before next class
> **Rules**: Try solving on your own first. If you're stuck, revisit the notes or today's code files. Google is allowed but copy-pasting is NOT!


## Part 1: Guess the Output

For each snippet below, **write down what you think the output will be** without running the code. Then run it to check.

### Q1.
```cpp
if (0) {
    cout << "Hello" << endl;
} else {
    cout << "Bye" << endl;
}
```

### Q2.
```cpp
if (!true) {
    cout << "A" << endl;
} else if (!false) {
    cout << "B" << endl;
} else {
    cout << "C" << endl;
}
```

### Q3.
```cpp
for (int i = 0; i < 3; i++) {
    cout << i * 2 << endl;
}
```

### Q4.
```cpp
int x = 5;
while (x > 0) {
    cout << x << endl;
    x = x - 2;
}
```

### Q5.
```cpp
for (int i = 0; i < 5; i++) {
    if (i == 3) {
        break;
    }
    cout << i << endl;
}
```

### Q6.
```cpp
for (int i = 0; i < 5; i++) {
    if (i == 2) {
        continue;
    }
    cout << i << endl;
}
```


## Part 2: Write the Code

### Q7. Greeting Machine
Take a user's name using `cin`. If the name is `"Admin"`, print `"Welcome back, boss!"`. Otherwise, print `"Hello, <name>!"` (where `<name>` is whatever they typed).

### Q8. Even or Odd
Take an integer from the user using `cin`. Print whether the number is **even** or **odd**.

**Hint**: Use the modulus operator `%`. If `num % 2 == 0`, it's even.

### Q9. Print 1 to 10
Write a **for loop** that prints numbers from **1 to 10**, each on a new line.

### Q10. Countdown
Write a **while loop** that counts down from **5 to 1**, then prints `"Go!"`.

**Expected Output:**
```
5
4
3
2
1
Go!
```

### Q11. Name Collector
Using a **while loop**, ask the user to enter **3 names** one by one. Store them in a `string` array. After collecting all names, use a **for loop** to print them with numbering.

**Example Output:**
```
1. Please enter your name: Alice
2. Please enter your name: Bob
3. Please enter your name: Charlie
1. Alice
2. Bob
3. Charlie
```

### Q12. Sum Calculator
Take **5 integers** from the user using a for loop. Print the **total sum** at the end.

**Example Output:**
```
Enter number 1: 10
Enter number 2: 20
Enter number 3: 5
Enter number 4: 15
Enter number 5: 50
Total sum: 100
```


## Part 3: Bug Hunt

Each snippet has a bug. **Find it, fix it, and explain what was wrong.**

### Q13.
```cpp
for (int i = 0; i < 5; i++) {
    cout << i << endl;
}
cout << i << endl;
```

### Q14.
```cpp
int i = 0;
while (i < 3) {
    cout << i << endl;
}
```

### Q15.
```cpp
if name == "John" {
    cout << "Hi John" << endl;
}
```


## Bonus Challenge (Optional)

### Q16. The Exit Game
Write a program using an **infinite while loop** that asks the user to type a command. The program should:
- Print `"You said yes!"` if the user types `"yes"`
- Print `"You said no!"` if the user types `"no"`
- **Exit the loop** if the user types `"exit"`
- Print `"Unknown command, try again"` and **skip** to the next step (using `continue`) for anything else

**Good luck! Remember — making mistakes is how you learn. Don't be afraid to experiment!**
