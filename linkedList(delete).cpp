# include <iostream>
#include<limits>
using namespace std ;
// creating node structure 
class Node {
public:
int data;
Node* next;
Node(int value){
    data= value;
    next=nullptr;
}
};
// creating linked list
class LinkedList{
private:
Node* head;
public:
LinkedList(){
    head=nullptr;
}
// inserting node at the beginning of the linked list
void insertAtBeginning(int value){
 Node* newNode = new Node(value);
 if(head==nullptr){
    head=newNode;
 }
else{
    newNode->next= head;
    head=newNode;
 }
}
// inserting node at the end of the linked list
void insertAtEnd(int value){
    Node* newNode = new Node(value);
    Node* temp = head;
    if(head==nullptr){
        head=newNode;}
        else{
            while(temp->next!=nullptr){
                temp=temp->next;
                }
                temp->next=newNode;
                }
                }
// inserting node at the given position
void insertAtPosition(int value, int position){

    Node* newNode = new Node(value);
      Node* temp = head;
       for(int i=1;i<position && temp!= nullptr;i++){
        temp=temp->next;
        }
        if(temp==nullptr){
            cout<<"position is out of range"<<endl;
            return;
            }
            else{
                newNode->next=temp->next;
                temp->next=newNode;
    }
    }
    //display 
    void display(){
        Node* temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
           temp=temp->next;
            }
            cout<<"NULL"<<endl;
    }
    // deleting node at the beginning of the linked list
    void deleteAtBeginning(){
        Node* temp = head;
        if(head==nullptr){
            cout<<"linked list is empty"<<endl;
            return;
            }
            else{
                head=head->next;
                delete temp;
                }
    }
    //deleting at the end
    void deleteFromEnd(){
        Node* temp = head;
        Node* prev = nullptr;
        if (head == nullptr) {
            cout<<"linked list is empty"<<endl;
            return;
            
        }
        else{
            while(temp->next!=nullptr){
                prev=temp;
                temp=temp->next;
                }
                prev->next=nullptr;
        }
    }
    //deleting at specific position
};
//main function
int main(){
    LinkedList list;
    list.insertAtBeginning(200);
    list.insertAtBeginning(100);
    list.insertAtEnd(300);
    list.insertAtPosition(400,2);
    list.insertAtBeginning(50);
    list.display();
    list.deleteAtBeginning();
    list.deleteFromEnd();
    list.display();
    return 0;
}