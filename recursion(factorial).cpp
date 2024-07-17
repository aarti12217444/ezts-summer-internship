#include <iostream>
using namespace std;
int factorial(int n)
{

    if (n < 1)
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
int main()
{
    int n = 15;
    int res= factorial(n);
    cout << "multiplication of odd number is " << res;
    return 0;
}