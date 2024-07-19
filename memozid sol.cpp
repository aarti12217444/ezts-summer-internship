#include <iostream>
using namespace std;

    int fib(int n,int arr[]){
        if(arr[n] != 0){
            return arr[n];
        }
        if(n==1 || n==2){
            return  1;
        }
        else{
            int result= fib(n - 1,arr) + fib(n - 2,arr);
            arr[n]=result;
            return result;
        }
    }
int main(){
    int input;
    cin>>input;//user entered 5
    int arr[input+1]={0};
    int result = fib(input,arr);
    cout<<result;
    return 0;
}
