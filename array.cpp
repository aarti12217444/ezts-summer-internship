
/*#include<iostream>
using namespace std;
int main(){

int marks[50];//50 contiguous memory location has been freezed 
float scores[100]={200.0,45.8,95.89};

cout<<marks<<endl;
//inserting values
marks[1]= 500;
marks[1]= 600;

cout<<"marks[1]= "<<marks[1]<<endl;
cout<<"marks[2]= "<<marks[2]<<endl;

return 0;
}*/



// type arrayname[arraysize]
/*# include <iostream>
using namespace std;

int main(){
int marks[4];//50 contiguous memory location has been freezed 
float scores[100]={200.0,45.8,95.89};

//inserting values
marks[1]= 500;
marks[2]= 600;
marks[3]= 700;
marks[0]=400;

//cout<<marks[2]<<endl;
//printing an entire array
int size= sizeof(marks)/sizeof(marks[0]);
for(int i=0;i<size;++i){
 cout<<marks[i]<<" ";
}
}*/

//multiD array
/*
# include <iostream>
using namespace std;

 int main(){

int arr[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
        cout<<arr[i][j]<<" ";
        
    }
    cout<<endl;
}
return 0;


#include<iostream>
using namespace std;
int main(){
    int sudo[9][9];
    for(int i=0;i<9;i++){
        for(int j=1;j<=9;j++){
            sudo[i][j]=j;
            cout<<sudo[i][j]<<" ";
        }
        cout<<endl;
    }
}
}*/

/*
# include <iostream>
using namespace std;

 int main(){

int n;
cout<<"Enter the numbers of elements in the array: "<<endl;
cin>>n;
int* arr=new int[n];//dynamic array created
for(int i=0;i<n;i++){
    arr[i]=i+2;
}
for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
    
}
cout<<endl;
}
*/

//delete arr(garbeg value will come b,coz array is deleted
/*
# include <iostream>
using namespace std;

 int main(){

int n;
cout<<"Enter the numbers of elements in the array: "<<endl;
cin>>n;
int* arr=new int[n];//dynamic array created
for(int i=0;i<n;i++){
    arr[i]=i+2;
}
for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
    
}
cout<<endl;
delete[] arr;
for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
    
}
cout<<endl;
}*/
