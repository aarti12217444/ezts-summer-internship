#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>vec = {10,90,40,30};
    
    //insertion
    vec.push_back(70);
    
    //access
    cout<<"Element at index 2: "<<vec[2]<<endl;
    
    
    //sorting
    sort(vec.begin(),vec.end());
    
    //print
    cout<<"Sorted vector: "<<endl;
    
    for(int i:vec){
        cout<<i<<endl;
    }
    
    return 0;
}