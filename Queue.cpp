

#include <iostream>
#include <stack>
using namespace std;


class Stack {
private:
    stack<int> data;

public:
    void push(int value) {
        data.push(value);
    }

    int pop() {
        if (!data.empty()) {
            int topElement = data.top();
            data.pop();
            return topElement;
        } else {
            
            cout << "Stack is empty" << endl;
            return -1; 
        }
    }

    int peek() {
        if (!data.empty()) {
            return data.top();
        } else {
            
            cout<< "Stack is empty" <<endl;
            return -1; 
        }
    }

    bool isEmpty() {
        return data.empty();
    }
};




class Queue {
private:
    Stack stack1; 
    Stack stack2; 

public:
    void enqueue(int value) {
        stack1.push(value);
    }

    int dequeue() {
        if (stack2.isEmpty()) {
            
            while (!stack1.isEmpty()) {
                stack2.push(stack1.pop());
            }
        }

        if (!stack2.isEmpty()) {
            return stack2.pop();
        } else {
            
            cout << "Queue is empty!" << endl;
            return -1; 
        }
    }

    int peek() {
        if (stack2.isEmpty()) {
        
            while (!stack1.isEmpty()) {
                stack2.push(stack1.pop());
            }
        }

        if (!stack2.isEmpty()) {
            return stack2.peek();
        } else {
            
            cout << "Queue is empty!" << endl;
            return -1; 
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Deque: " << q.dequeue() << endl; //10
    cout << "Peek : " << q.peek() << endl;       //20

    return 0;
}
