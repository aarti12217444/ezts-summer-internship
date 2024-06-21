#include<iostream>
using namespace std;
template <typename T>
class Matrix{
public:
T arr[3][2];
T value;
Matrix(){
cout<<"default constructor called"<<endl;
for(int i = 0;i <3;i++){
    for(int j = 0;j<2;j++){
        arr[i][j]=T();
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
Matrix(int a,int b){
for(int i = 0;i <a;i++){
    for(int j = 0;j<b;j++){
        cout<<arr[i][j] = value<<" ";
    }
    cout<<endl;
}
}
void setValue(T value){
for(int i = 0;i <3;i++){
    for(int j = 0;j<2;j++){
        arr[i][j]=value;
    }
    cout<<endl;
}
}
void getValue(){
for(int i = 0;i <3;i++){
    for(int j = 0;j<2;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
void setdirectvalue(T inputarr[3][2]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                arr[i][j] = inputarr[i][j];
            }
        }
    }
};
int main(){
Matrix <int> m1;
Matrix <string> m2;
int arr[3][2]={{1,2},{3,4},{5,6}};
string arr1[3][2]={{"A","B"},{"C","D"},{"E","F"}};
m1.setdirectvalue(arr);
m2.setdirectvalue(arr1);
cout<<"printing int array"<<endl;
m1.getValue();
cout<<"printing string array"<<endl;
m2.getValue();
return 0;
}