#include <iostream>
using namespace std;
class A{
    public: 
    void fun1(){
        cout<<"I am first parent class"<<endl;
    }
};
class B :virtual public A{
    public:
    void fun2(){
        cout<<"I am second parent class"<<endl;
    }
};
class C : virtual public A{
    public:
    void fun3(){
    cout<<"I am third parent class"<<endl;
    }
};
class D : virtual public B, public C{
  public:
  void fun(){
      A::fun1();
      B::fun2();
      C::fun3();
      
  }
};
int main(){

    D d;
    d.fun();
    
    return 0;
}