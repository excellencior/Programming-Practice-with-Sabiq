# Homework (Maps, Queues & Stacks)

> **Due**: Before next class
> **Rules**: Try solving on your own first. You can revisit the notes and class code files if you get stuck. Google is your friend, but don't copy-paste solutions. Write every line yourself.

Today we learned about three fundamental C++ STL data structures: `map` (key-value storage), `queue` (FIFO - First In First Out), and `stack` (LIFO - Last In First Out). These tools are used everywhere in real-world software, from game engines to web servers.


## Part 1: Tricky Code Snippets (Guess the Output)

Read each snippet carefully before running it. Some of these contain subtle C++ behavior traps!

### Q1. The Accidental Insertion Trap
```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> playerScores;
    playerScores["Alice"] = 95;
    
    if (playerScores["Bob"] == 100) {
        cout << "Bob is the top scorer!" << endl;
    } else {
        cout << "Bob is not top scorer." << endl;
    }
    
    cout << "Total players in database: " << playerScores.size() << endl;
    return 0;
}
```
**Questions:**
1. What will `playerScores.size()` print?
2. Why did the size change even though we only checked `playerScores["Bob"]` in an `if` condition?
3. How would you rewrite the check using `find()` or `count()` so the map size stays 1?


### Q2. Pass-by-Value Mystery
```cpp
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void modifyContainers(stack<int> s, queue<int> q) {
    s.push(99);
    q.pop();
}

int main() {
    stack<int> s;
    queue<int> q;
    
    s.push(10); s.push(20);
    q.push(100); q.push(200);
    
    modifyContainers(s, q);
    
    cout << "Stack top: " << s.top() << endl;
    cout << "Queue front: " << q.front() << endl;
    cout << "Stack size: " << s.size() << endl;
    return 0;
}
```
**Questions:**
1. What is the output of this program?
2. Why were the changes inside `modifyContainers` lost when returning to `main()`?
3. What C++ feature would you use in the function parameter list if you *wanted* `modifyContainers` to permanently change the original stack and queue?


### Q3. Map vs Unordered Map Ordering
```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> items;
    items[50] = "Gold";
    items[10] = "Bronze";
    items[30] = "Silver";
    
    for (auto p : items) {
        cout << p.first << ":" << p.second << " ";
    }
    cout << endl;
    return 0;
}
```
**Questions:**
1. In what order will the key-value pairs be printed?
2. If we changed `map<int, string>` to `unordered_map<int, string>`, would the output order be guaranteed to be the same? Why or why not?


### Q4. The Double Reverser
```cpp
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<int> q;
    q.push(1); q.push(2); q.push(3);
    
    stack<int> s;
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
```
**Questions:**
1. What is the output of this code?
2. Explain how combining a Queue (FIFO) and a Stack (LIFO) transforms the order of elements.


---

## Part 2: Conceptual Challenges

### Q5. Why does pop() return void?
In C++, both `stack::pop()` and `queue::pop()` return `void`. You cannot write `int val = s.pop();`. 
1. What two steps must you take if you want to inspect a value and then remove it?
2. What happens if you call `.top()` or `.pop()` on an empty stack or queue? How do you prevent this bug in your code?


### Q6. The Triple Stack Conveyor Belt
Suppose you push the characters `'A'`, `'B'`, `'C'`, `'D'` into **Stack 1** in that order.
Then, you pop everything from **Stack 1** and push it into **Stack 2**.
Finally, you pop everything from **Stack 2** and push it into **Stack 3**.

If you pop and print everything from **Stack 3**, what order will the characters come out? Show your step-by-step reasoning.


---

## Part 3: Real-Life Problem — Nexus Gaming Lounge System

You have been hired to build the backend logic for **Nexus Gaming Lounge**. The system needs to manage player accounts, queue up players for gaming stations, and maintain an action log with undo capabilities.

You will use all three data structures together:
- `map<string, int> playerBalances` to store registered player names and their gaming credit balances (key: name, value: coins).
- `queue<string> waitingLine` to manage players waiting for an available gaming PC (FIFO).
- `stack<string> sessionHistory` to record every successful PC assignment for auditing and undo functionality (LIFO).

### Specifications:

1. **Setup Initial Balances (Map)**
   Register the following players and coin balances into `playerBalances`:
   - "Alex": 100
   - "Bella": 250
   - "Chris": 50
   - "Diana": 180

2. **Arrival Line (Queue)**
   Three players arrive in this order: `"Alex"`, `"Chris"`, and `"Bella"`. Add them to `waitingLine`.

3. **Process First Two Players**
   Serve the first 2 players from `waitingLine`:
   - Get the player name from the front of `waitingLine` and remove them from the queue.
   - Deduct **30 coins** from their balance in `playerBalances`.
   - Log the action into `sessionHistory` as a string formatted like: `"Assigned PC to Alex"`.

4. **Safe Member Check (No Accidental Insertion!)**
   Check if a customer named `"Ethan"` is registered in `playerBalances` using `.count()` or `.find()`. Print whether Ethan was found. Verify that checking Ethan did **not** accidentally add Ethan to `playerBalances`.

5. **Manager Undo Operation (Stack)**
   The manager realizes the last PC assignment was made by mistake!
   - Inspect the top of `sessionHistory` to see who was last assigned a PC.
   - Pop that action from `sessionHistory`.
   - Refund **30 coins** back to that player's balance in `playerBalances`.
   - Print `"Undone action for <PlayerName>. 30 coins refunded!"`

6. **Final Report Output**
   Print the final status of the system:
   - **All registered accounts and balances** (iterating through `playerBalances`). Notice how the map automatically formats them in alphabetical order!
   - **Remaining players waiting in line** (inspecting `waitingLine` without destroying it).
   - **Remaining items in sessionHistory**.

### Sample Output Format:
```
--- Initializing Nexus Gaming Lounge ---
Registered 4 players.

--- Players Arriving ---
Alex, Chris, and Bella joined the waiting queue.

--- Serving Players ---
Served Alex. 30 coins deducted.
Served Chris. 30 coins deducted.

--- Member Verification ---
Checking for Ethan: Not registered. (Database size remains 4)

--- Manager Undo ---
Last Action: Assigned PC to Chris
Undone action for Chris. 30 coins refunded!

--- Final System Report ---
Player Balances:
  Alex: 70 coins
  Bella: 250 coins
  Chris: 50 coins
  Diana: 180 coins

Waiting Queue:
  Bella

Session History Stack:
  Assigned PC to Alex
```

Take your time to structure your code cleanly into functions if possible. Have fun coding!
