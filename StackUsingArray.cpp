#include<iostream>
#include<vector>
#define size 10
using namespace std;
class Array{
public:
int arr1[size];
int top = -1;
public:
void push(int val)
{
    if(top >= size)
    {
       cout<<"stack overloaded"<<endl;
    }
    else
    {
       top++;
       arr1[top] = val;    
    }
}
void show(){
   cout<<"elements are :"<<endl;
    for(int i = top;i >= 0;i--){
        cout<<arr1[i]<<endl;
    }
}
void pop()
{
   if(top >= size)
   {
    cout<<"stack underflow"<<endl;
   }
   else
   {
   cout<<"top element is "<<arr1[top]<<endl;
   top--;
   }
}
void empty()
{
 if(top == -1)
 {
 cout<<"empty stack"<<endl;
 }
 else
 {
 cout<<"not empty"<<endl;
 }
}
};
int main(){
   Array stack;
   int arr[size]={1,3,5,7,9,2,4,6,8};
   stack.empty();
   stack.push(arr[0]);
   stack.push(arr[1]);
   stack.push(arr[2]);
   stack.push(arr[3]);
   stack.show();
   cout<<"printing top element"<<endl;
   stack.pop();
   stack.empty();
   stack.pop();
   return 0;
}