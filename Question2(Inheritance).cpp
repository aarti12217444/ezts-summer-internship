// Create two parent classes named A , B
// Create a Child class that inherits both parent classes

// In both parent classes and child class
// Create a function in each with same name eg. greet()

// From main function
// Create object of each classes and run the greet function
#include <iostream>
using namespace std;
class A{
    public: 
    void greet(){
        cout<<"I am first parent class"<<endl;
    }
};
class B{
    public:
    void greet(){
        cout<<"I am second parent class"<<endl;
    }
};
class C : public A , public B{
    public:
    void greet(){
        cout<<"I am child class"<<endl;
    }
};
int main(){
    A a1;
    a1.greet();
    B b1;
    b1 .greet();
    C c1;
    c1.greet();
}
