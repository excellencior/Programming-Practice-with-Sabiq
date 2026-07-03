# Homework (Problem Solving)

> **Due**: Before next class
> **Rules**: Try solving on your own first. You can revisit the notes and class code files if you get stuck. Google is your friend, but don't copy-paste solutions. Write every line yourself.

This homework is a little different from the previous ones. Instead of small syntax exercises, you'll be solving actual problems using everything you've learned so far (variables, arrays, loops, functions, recursion, cin/cout). Take your time with these.


## Q1. Fibonacci Numbers (using a loop)

The Fibonacci sequence is a series of numbers where each number is the **sum of the two numbers before it**. It starts like this:

```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
```

So, the pattern is:
- fib(0) = 0
- fib(1) = 1
- fib(2) = 0 + 1 = 1
- fib(3) = 1 + 1 = 2
- fib(4) = 1 + 2 = 3
- fib(5) = 2 + 3 = 5
- ... and so on

In short: `fib(n) = fib(n-1) + fib(n-2)`

**Your task**: Take a number `n` from the user and print the first `n` Fibonacci numbers using a **for loop** or a **while loop**.

**Example** (if user enters 7):
```
0 1 1 2 3 5 8
```

**Hint**: You'll need two variables to keep track of the previous two numbers. After each step, update them.


## Q2. Fibonacci Numbers (using recursion)

Now solve the same Fibonacci problem, but this time write a **recursive function** called `fib(int n)` that returns the nth Fibonacci number.

Then in `main()`, use a loop to call `fib(i)` for each value from 0 to n-1 and print the results.

**Hint**: Your base cases are `fib(0) = 0` and `fib(1) = 1`. For anything else, the function should call itself: `return fib(n-1) + fib(n-2)`. Think of it like the Russian doll example from class, each doll opens a smaller one until there are no more dolls left.


## Q3. Factorial

The factorial of a number `n` (written as `n!`) means multiplying all whole numbers from 1 up to n together.

```
5! = 5 x 4 x 3 x 2 x 1 = 120
3! = 3 x 2 x 1 = 6
1! = 1
0! = 1 (by definition, just accept it for now)
```

**Part A**: Write a function `int factorial(int n)` that calculates factorial using a **loop**.

**Part B**: Write another function `int factorialRecur(int n)` that does the same thing using **recursion**.

**Hint for recursion**: `factorial(n) = n * factorial(n-1)`. The base case is `factorial(0) = 1`. It's very similar to Fibonacci, just a different formula.

**Example** (if user enters 5):
```
120
```


## Q4. Print a Pyramid

Using **nested loops**, print a pyramid of stars based on a height `n` entered by the user.

**Example** (if user enters 5):
```
    *
   ***
  *****
 *******
*********
```

Notice the pattern for each row:
- Row 1 has 1 star, Row 2 has 3 stars, Row 3 has 5 stars...
- In general, Row `i` has `(2*i - 1)` stars
- Before the stars, there are spaces to center them. Row `i` has `(n - i)` spaces before the stars

**Hint**: Use one loop for the rows. Inside it, use one loop to print the spaces and another loop to print the stars. Then print `endl` at the end of each row.


## Q5. Reverse a String

Take a person's name from the user and print it **backwards**.

**Example** (if user enters "Mango"):
```
ognaM
```

**Hint**: A string is just an array of characters. You know how to get its size using `.size()`. So, start a loop from the **last index** and go backwards to 0, printing each character one by one.

```cpp
// Starting from the end and going backwards
for (int i = name.size() - 1; i >= 0; i--) {
    // print name[i]
}
```


## Q6. Multiplication Table

Take a number from the user and print its **multiplication table** from 1 to 10.

Write a function called `void printTable(int num)` that does the printing.

**Example** (if user enters 7):
```
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10 = 70
```

**Hint**: Inside the function, use a for loop from 1 to 10. For each step, print `num x i = num*i`.


## Q7. Find the Largest Number in an Array

Write a function called `int findMax(int arr[], int size)` that takes an integer array and its size, and **returns the largest number** in that array.

Test it in `main()` with this array:
```cpp
int numbers[] = {12, 45, 7, 23, 56, 3, 89, 14};
```

**Expected Output:**
```
The largest number is: 89
```

**Hint**: Start by assuming the first element is the largest. Then loop through the rest of the array. If you find something bigger, update your "largest" variable. After the loop ends, return it. This is a very common pattern in programming called "linear search for maximum".


## Bonus: Pyramid using Functions

Go back to Q4. This time, instead of writing everything inside `main()`, break it into functions:

- `void printSpaces(int count)` that prints `count` spaces
- `void printStars(int count)` that prints `count` stars
- `void printPyramid(int height)` that uses the two functions above to print the full pyramid

This is how real programs are written. Small, reusable pieces that work together.


**Take your time with these. If you can solve all of them, you're doing really well. See you in the next class!**
