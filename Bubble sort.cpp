#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}

void bubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                //swap
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(int arr[],int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    //print original array 
    printArray(arr,size);
    //sorted function call
    bubbleSort(arr,size);
    
    //print sorted array
    printArray(arr,size);
    return 0;
}