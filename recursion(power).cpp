#include <iostream>
using namespace std;
int factorial(int n)
{

    if (n <= 1)
    {
        return 1;
    }
    if (n % 2 != 0)
    {
         return n * factorial(n - 2);
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}
int main()
{
    int n = 15;
    int res= factorial(n);
    cout << "multiplication of odd number is " << res;
    
    int base=2;
    int exponent=3;
    int pResult=power(base,exponent);
    cout<<"The power is: "<<pResult;
    return 0;
}