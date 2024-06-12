#include<iostream>
using namespace std;
int main(){
    cout<<"Enter student's marks: "<<endl;
    int marks;
    cin>>marks;
                if(marks>=90){
                    cout<<"O"<<endl;
                }
                else if (marks>=80){
                    cout<<"A+"<<endl;
                }
                else if(marks>=70){
                    cout<<"A"<<endl;
                }
                else if(marks>=60){
                    cout<<"B+"<<endl;
                }
                else if(marks>=50){
                    cout<<"B"<<endl;
                }
                else if(marks>=40){
                    cout<<"C"<<endl;
                }
                else{
                    cout<<"F";
                }
        
}