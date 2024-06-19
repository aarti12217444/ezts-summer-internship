//scope resolution

#include<iostream>
using namespace std;
class A{
public:
void greet(){
  cout<<"hi how are you."<<endl;
}
};
class B{
public:
void greet(){
  cout<<"hi congratulations"<<endl;
}
};
class C : public A,public B{
public:
void greet(){
    B::greet();
}

};
int main(){
A a1;
B b1;
C c1;
// a1.greet();
// b1.greet();
c1.greet();

}