#include<iostream>
#include<vector>
using namespace std;
class ArrayStack{
 private:
 vector<int> element = {2,4,3,5,7,6,8,9};
 public:
 void push(vector<int> element){
    for(int i = 0;i<element.size();i++){
        element.push_back(i);
    }
     cout<<"element pushed"<<endl;
 }
 void pop(){
     if(element.empty() == false){
        for(int i = 0;i<element.size();i++){
            element.pop_back();
        }
     }
        else{
            cout<<"Stack is empty";
        }
 }
 int peek(){
        if(element.empty() == false){
            for(int i = 0;i<element.size();i++){
            return element.back();
        }
        }
        cout<<"Stack is empty";
        return -1;
    }
bool isEmpty(){
        return element.empty();
    }
};
int main(){

    ArrayStack stack;
    
    cout<<"Top Element is : "<<stack.peek()<<endl;
    
    cout<<stack.isEmpty()<<endl;
    
    stack.pop();
    
    cout<<"Top Element is after pop: "<<stack.peek()<<endl;
    
    return 0;
}