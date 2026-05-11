#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1; // empty stack
    }

    // Push
    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    // Pop
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    // Peek
    int peek() {
        if (top == -1) return -1;
        return arr[top];
    }

    // Check empty
    bool isEmpty() {
        return top == -1;
    }
}; 
