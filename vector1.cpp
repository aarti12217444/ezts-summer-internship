#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> emptyVector;//empty vector
     vector<int> initializedVector={1,2,3,4,5};//initialized Vector
     vector<int> sizedVector(6,3);//sized Vector constructed
     
     //access
     cout<<"First element is: "<<initializedVector[0]<<endl;
     cout<<"second element is: "<<initializedVector.at(1)<<endl;
     
     //modify
     initializedVector[0] = 6;
     initializedVector.at(1) = 6;
     cout<<"First element is: "<<initializedVector[0]<<endl;
     cout<<"second element is: "<<initializedVector.at(1)<<endl;
     
     initializedVector.push_back(10);
     
     //iterators
    //  initializedVector.begin();
    //  initializedVector.end();
     
     //insert a begining
     initializedVector.insert(initializedVector.begin(),99);
     initializedVector.insert(initializedVector.begin()+3,99);
     
     initializedVector.insert(initializedVector.end()-1,97);
     
     for(int n: initializedVector){
         cout<<"element is: "<<n<<endl;
     }
     
     cout<<initializedVector.front()<<endl;
     cout<<initializedVector.back()<<endl;
     
     //initializedVector.clear();//cleared the vector
     
     //check whether a vector is empty or not
     cout<<initializedVector.empty()<<endl;
     
     //resized vector
     cout<<"size is: "<<initializedVector.size()<<endl;
     
     initializedVector.resize(16,0);
     
     for(int n: initializedVector){
         cout<<"updated element is: "<<n<<endl;
     }
     
     initializedVector.resize(2);
    
    for(int n: initializedVector){
         cout<<"updated element after 2: "<<n<<endl;
     }
    return 0;
}

https://codeshare.io/J7lEME
https://justpaste.it/e3u4k
https://cplusplus.com/reference/vector/vector/