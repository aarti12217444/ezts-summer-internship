// create an unsorted array from user input of size at least 6.
// sort it using bubblesort
// find an element from user input using binarySearch.
#include <iostream>
#include <array>
using namespace std;


int binarySearch(int arr[],int key,int size){
    int low = 0;
    int high = size - 1;
    
    while(low<=high){
        int mid =  (high + low) / 2;
        if(key==arr[mid]){
            return mid;
        }
        
        if(key>arr[mid]){
            low = mid+1;
        }
        else{ 
            high = mid - 1;
        }
    }
    return -1;
}
void inputarray(int*arr,int size){
     for(int i = 0;i<size;i++){
       cin>>arr[i];
     }
}
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void sortting(int arr[],int size){
    for(int i = 0;i<size - 1;i++){
        for(int j = 0;j<size - 1 -i;j++){
            if(arr[j]>arr[j+1]){
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
   int size;
   cout<<"enter size of array"<<endl; // size
   cin>>size;
   int* arr = new int[size]; // declaring array
   int key;
   cout<<"Enter array elements:"<<endl;
   inputarray(arr,size);      // putting elements in array by user
   cout<<"original array:"<<endl;
   printArray(arr,size);      // original array
   cout<<"sorted array."<<endl;
   sortting(arr,size);        //sorted array
   printArray(arr,size);
   cout<<"Enter element to search:"<<endl;
   cin>>key;
   int result = binarySearch(arr,key,size);

   if(result == -1){
       cout<<"Not Found";
   }
   else{
       cout<<key<<" Found at index: "<<result;
   }

    
    return 0;
}