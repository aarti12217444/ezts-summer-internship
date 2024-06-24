#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int* ptr=arr;
    for(int i=0;i<10;i++){
        if((*ptr)%2==0){
            *ptr=1;
        }
        else{
            *ptr=0;
        }
        ptr++;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}