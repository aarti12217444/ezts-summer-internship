#include<iostream>
#define SIZE 100
using namespace std;
class Queue{
    public:
    int arr[SIZE];
    int front,rear;
    Queue(){
        front=0;
        rear=0;
    }
    void enqueue(int element){
        if(rear==SIZE-1){
            cout<<"Queue is full";
        }
        else{
        arr[rear]=element;
        rear++;
        }
    }
    void Dequeue(){
        if(rear==0){
            cout<<"Queue is empty";
        }
        else{
            int x=arr[front];
            front=front+1;
            cout<<"deleted element : "<<x<<endl;
        }
    }
    int frontelement(){
        if(rear==0){
            cout<<"No element in dequeue";
            return -1;
        }
        else{
            return arr[front];
        }
    }
    bool isempty(){
        if(rear==0){
            return true;
        }
        else{
            return false;
        }
    }


};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.Dequeue();
    cout<<"Front element "<<q.frontelement();
    cout<<"checking queue is empty or not:"<<q.isempty();

}