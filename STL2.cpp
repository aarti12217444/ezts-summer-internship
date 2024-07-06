#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;   //empty stack
    
    //push element
    st.push(20);
    st.push(80);
    st.push(70);
    
    //access - top element(LIFO)
    cout<<"Top element is: "<<st.top()<<endl;
    
    //pop
    st.pop();
    
    //access - top element(LIFO)
    cout<<"Top element after pop is: "<<st.top()<<endl;
    
    return 0;
}