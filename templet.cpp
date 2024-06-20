#include <iostream>
using namespace std;
//2 function - swqp 2 values, max of two values
template <typename T>
// int getmax(int a, int b)
T getmax(T a, T b){
    return(a>b)?a:b;
}
template <typename T>
void swap(T &a, T &b){//cll by refrence
    T temp=a;
    a=b;
    b=temp;
}
template <typename T>
void printArray(T arr[],int size){
 for(int i = 0;i<size;i++){
    cout<<arr[i]<<" ";
 }
 cout<<endl;
}
int  main(){
    cout<<getmax(10,20)<<endl;
    cout<<getmax(34,5)<<endl;
    //cout<<"swap"<<swap(3,5)<<endl;
    int arr[] = {1,3,5,7,3,7,9};
    string arr1[] ={"hi","how","are","you"};
    printArray(arr,7);
    printArray(arr1,4);
}