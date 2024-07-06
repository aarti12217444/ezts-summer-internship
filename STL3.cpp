#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    
    //push
    q.push(10);
    q.push(20);
    q.push(30);
    
    //access - front element
    
    cout<<"The Front Element is: "<<q.front()<<endl;
    
    //pop
    q.pop();
    
     //access - front element
    
    cout<<"The Front Element after pop is: "<<q.front()<<endl;
    return 0;
}