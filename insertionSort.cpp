#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}

void insertionSort(int arr[],int size){
    for (int i=1; i<size; i++){
        int cur=arr[i];
        int j=i-1;
        while(arr[j]>cur && j>=0){
            arr[j + 1]=arr[j];
            j--;
        }
        arr[j+1]=cur;
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
    int arr[] = {2,9,5,10,19,56,89,40,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    //print original array 
    cout<<"original arr: "<<endl;
    printArray(arr,size);
    //sorted function call
    insertionSort(arr,size);
    
    //print sorted array
    cout<<"Sorted array: "<<endl;
    printArray(arr,size);
    return 0;
}

