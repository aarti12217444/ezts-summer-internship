#include<iostream>
using namespace std;
int main(){
    int* ptr = new int;//this line allocate memory for an integer
    *ptr = 100;//we are assing value of 100 to above allocated memory
    cout<<"The value is: "<<*ptr<<endl;
    delete ptr;
    cout<<"The value is: "<<*ptr;
    return 0;
}