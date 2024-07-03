#include <iostream>
#define SIZE 100
using namespace std;

class Queue{
    public:
        int arr[SIZE];
        int front,rear;
        
        Queue(){
            front = 0;
            rear = 0;
        }
        void enqueue(int element){
            if(rear == SIZE-1){
                cout<<"Queue is full "<<endl;
            }
            else{
                arr[rear]=element;
                rear++;
            }
        }
        void dequeue(){
            if(rear == 0){
                cout<<"Queue is empty"<<endl;
            }
            else{
                int x = arr[front];
                front++;
                cout<<"deleted element: "<<x<<endl;
            }
        }
        int frontElement(){
            if(rear == 0){
                cout<<"No element in queue"<<endl;
                return -1;
            }
            else{
                return arr[front];
            }
        }
        bool isEmpty(){
            if(rear == 0){
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
   q.enqueue(40);
   q.enqueue(50);
   q.enqueue(60);
   q.dequeue();
   
   cout<<"Element in front: "<<q.frontElement()<<endl;
   cout<<"Check Queue is empty or not: "<<q.isEmpty()<<endl;
    
    return 0;
}