#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T arr[50];
    int top;

public:
    // Constructor initializing top
    Stack() : top(-1) {}

    // Function to push a value onto the stack
    void push(T val) {
        if (top >= 49) {
            cout << "Stack overflow" << endl;
        } else {
            arr[++top] = val;
        }
    }

    // Function to pop a value from the stack
    T pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return 0; // Assuming T can be zero; for non-numeric types, this might need a different approach
        } else {
            return arr[top--];
        }
    }
};

int main() {
    Stack<int> intStack;
    Stack<string> stringStack;

    intStack.push(10);
    intStack.push(20);
    stringStack.push("hello");
    stringStack.push("world");

    cout << intStack.pop() << endl; // Output: 20
    cout << intStack.pop() << endl; // Output: 10
    cout << stringStack.pop() << endl; // Output: world
    cout << stringStack.pop() << endl; // Output: hello

    return 0;
}
