#include<iostream>
using namespace std;
void modifiedValue(int a){
    a=10;
    cout<<"Inside function, a = "<<a<<endl;
}
int main(){
    int a=5;
    cout<<"Before function call, a= "<<a<<endl;
    modifiedValue(a);
    cout<<"After function call, a = "<< a<< endl;
    return 0;
}