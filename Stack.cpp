#include <iostream>
#include<vector>
using namespace std;

class Stack{
    private:
        vector<int>element;   //create empty vector

    public:
        void push(int x){         //insert element in the stack
            element.push_back(x);   
        }
        void pop(){                    //delete element from the stack
            if(element.empty()){
                cout<<"Stack is empty";
            }
            else{
                element.pop_back();
            }
        }
        int peek(){                //return last element from the stack
            if(element.empty()){
                return -1;
                cout<<"Stack is empty";
                
            }
            else{
                return element.back();
            }
        }
        bool isEmpty(){             //return empty element from the stack
            return element.empty();
        }
};
int main(){
    Stack s;
    s.push(9);
    s.push(3);
    s.push(2);
    s.push(6);
    s.push(5);

    
    cout<<"Top element "<<s.peek()<<endl;
    
    s.pop();
    cout<<"Top element "<<s.peek();
    
    return 0;
}