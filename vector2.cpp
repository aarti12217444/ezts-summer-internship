// // Create a vector of integers, add ten values, remove last element, insert a value at second position, then print the vector,
// // then remove the 5 th last element of vector and then print the final vector
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> initializedVector={1,2,3,4,5,6,7,8,9,0};//initialized Vector


    
    initializedVector.erase(initializedVector.end()-1);
    initializedVector.insert(initializedVector.begin()+2,99);
    initializedVector.erase(initializedVector.end()-4);
    
    for(int n: initializedVector){
         cout<<"element is: "<<n<<endl;
     }
    
    return 0;
}
