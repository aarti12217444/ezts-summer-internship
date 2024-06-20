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

    // Function to check if stack is empty
    bool isEmpty() const {
        return top == -1;
    }

    // Function to get the value at the given index
    T get(int index) const {
        if (index <= top && index >= 0) {
            return arr[index];
        }
        return T(); // Returning default value of T
    }

    // Function to get the current top index
    int getTop() const {
        return top;
    }
};

template <typename T>
class StackPrinter {
public:
    void print(const Stack<T>& stack) {
        if (stack.isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        
        for (int i = 0; i <= stack.getTop(); ++i) {
            cout << stack.get(i) << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<int> intStack;
    Stack<string> stringStack;

    intStack.push(10);
    intStack.push(20);
    stringStack.push("hello");
    stringStack.push("world");

    StackPrinter<int> intStackPrinter;
    StackPrinter<string> stringStackPrinter;

    cout << "Integer stack: ";
    intStackPrinter.print(intStack); // Output: 10 20

    cout << "String stack: ";
    stringStackPrinter.print(stringStack); // Output: hello world

    cout << "Pop from int stack: " << intStack.pop() << endl; // Output: 20
    cout << "Pop from string stack: " << stringStack.pop() << endl; // Output: world

    cout << "Integer stack after pop: ";
    intStackPrinter.print(intStack); // Output: 10

    cout << "String stack after pop: ";
    stringStackPrinter.print(stringStack); // Output: hello

    return 0;
}
