#include<iostream>
using namespace std;

template<typename TYPE>
TYPE sum(TYPE a, TYPE b){
    return a+b;
}
template<typename t>
t diff(t a, t b){
    return a-b;
}
int main(){
    cout<<"The sum is: "<<sum<int>(10,10)<<endl;
    cout<<"The difference is: "<<diff<int>(90,10);
    return 0;
}


#include<iostream>
using namespace std;

template<typename...ARGS>
void print(ARGS...args){
    (cout<<...<<args)<<endl;
}

int main(){
    print("Hii ","i ","salmon ","bhai");
    print("My AGE is: ",60);
    print("I Love Black Deer and FootPath");
    return 0;
}

#include<iostream>
using namespace std;

template<typename TYPE>
class FullName{
    public:
    TYPE first;
    TYPE second;
    
    FullName(TYPE var_a,TYPE var_b){
        first = var_a;
        second = var_b;
    }
    TYPE getFullName(){
        return first+second;
    }
};
int main(){
   FullName <string>obj("aarti","kashyap");
   cout<<"Full Name is : "<<obj.getFullName()<<endl;
   FullName<int>obj2(10,20);
   cout<<"sum is: "<<obj2.getFullName();
   return 0;
}

#include<iostream>
using namespace std;

//if there is an string type then sum 
//if it's a float type then multiply
//else difference

template<typename TYPE>
TYPE calc(TYPE a, TYPE b){
    return a-b;
}

template<> 
string calc(string a, string b){
    return a+" "+b;
}

template<>
float calc(float a, float b){
    return a*b;
}

int main(){
   cout<<"calling calc(String): "<<calc<string>("hello","world")<<endl;
   cout<<"calling calc(float): "<<calc<float>(5.5,5.5)<<endl;
   cout<<"calling calc(int): "<<calc<int>(10,8)<<endl;
   cout<<"calling calc(double): "<<calc<double>(21.3,5.5)<<endl;
   return 0;
}

//create 4 specialized function
//return their caculated value and store them in a string variable;
//eg. answer[3]; 
//answer[0]= "the sum is 90" 
//eg. answer = "the sum is 90 ,the difference is 25";
//and so on..

#include<iostream>
#include<string>
using namespace std;



template<typename t>
t calc(t a, t b){
    return a-b;
}

template<> 
int calc(int a, int b){
    return a+b;
}

template<>
float calc(float a, float b){
    return a*b;
}

template<>
double calc(double a,double b){
    return a/b;
}

template<typename...ARGS>
void print(ARGS...args){
    (cout<<...<<args)<<endl;
}

int main(){
    int a,b;
    cout<<"enter first number: "<<endl;
    cin>>a;
    cout<<"enter second number: "<<endl;
    cin>>b;
    string answer[4];
    answer[0]="sum: "+to_string(calc<int>(a,b));
    answer[1]="difference: "+to_string(calc<long>(a,b));
    answer[2]="mul: "+to_string(calc<float>(a,b));
    answer[3]="div: "+to_string(calc<double>(a,b));
    
    print(answer[0],answer[1],answer[2],answer[3]);
    
    
    // string a="difference: "+to_string(a)(calc<int>(a,b));
    // cout<<a;
    

   
   return 0;
}