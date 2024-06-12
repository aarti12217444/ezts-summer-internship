#include<iostream>
#include<cmath>
using namespace std;
double add(double a, double b){
    return a+b;
}
double subtract(double a, double b){
    return a - b;
}
double multiply(double a, double b){
return a*b;
}
double divide(double a, double b){
    if(b==0){
        cout<<"cannot divide by zero";
        return 0;
    }
    else{
    return a/b;
    } 
}
double sine(double angle){
    return sin(angle);
}
double cosine(double angle){
    return cos(angle);
}
double tangent(double angle){
    return tan(angle);
}
double natural_log(double value){
    if (value <= 0) {
        cout << "not defined" << endl;
        return 0; 
    } else {
        return log(value);
    }
}
double log_base10(double value){
    if (value <= 0) {
        cout << "not defined" << endl;
        return 0; 
    } else {
        return log10(value);
}
}
double power(double base, double exponent){
    return pow(base,exponent);
}
long factorial(int n){
    if (n < 0) {
        cout << "not defined" << endl;
        return 0; 
    }
    long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main(){
cout<<"add :"<<add(4,6)<<endl;
cout<<"subtract :s"<<subtract(6,2)<<endl;
cout<<"multiplication :"<<multiply(3,6)<<endl;
cout<<"divide:"<<divide(2,4)<<endl;
cout<<"sin :"<<sine(1)<<endl;
cout<<"cos :"<<cosine(1)<<endl;
cout<<"tan :"<<tangent(1)<<endl;
cout<<"natural log :"<<natural_log(6)<<endl;
cout<<"base 10 log :"<<log_base10(4)<<endl;
cout<<"power :"<<power(3,4)<<endl;
return 0;
}