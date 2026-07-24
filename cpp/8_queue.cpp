#include <iostream>
#include <queue>
using namespace std;

template<typename T>
void printQueue(queue<T> gq) {
    cout << "[Counter] => ";
    queue<T> copy(gq);
    while (!copy.empty()) {
        cout << copy.front() << ' ';
        copy.pop();
    }
    cout << " [Door]" << endl;
}

int main() {
    // Queue
    // Exactly what the name says.
    // Suppose you want to order a coffee in a coffee-shop.
    // The line looks like this: [Counter] <- P1, P2, P3 ... [Door to the shop] <- You're here
    // The line will look like this now: [Counter] <- P1, P2, P3 ..., YOU
    // Whoever is in the first, gets coffee first, whoever is in the last-position gets coffee last
    // FIFO => First In First Out

    queue<string> q;
    q.push("P1");
    q.push("P2");
    q.push("Sabiq");

    // When the counter starts serving coffee, the first person in the queue will get that and leave the queue
    q.pop();
    q.pop();
    printQueue(q);

    q.push("John");
    printQueue(q);

    // To see the back of the queue
    cout << q.back() << endl;

    // Task: Research through other available STL functions that the queue have (H.W. on this)
    
    return 0;
}