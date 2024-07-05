
#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}

void selectionSort(int arr[],int size){
    for (int i=0; i<size - 1 ; i++){
        for(int j=i + 1;j<size;j++){
            if(arr[j] < arr[i]){
                swap(arr[j],arr[i]);
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
    cout<<"original arr: "<<endl;
    printArray(arr,size);
    //sorted function call
    selectionSort(arr,size);
    
    //print sorted array
    cout<<"Sorted array: "<<endl;
    printArray(arr,size);
    return 0;
}

