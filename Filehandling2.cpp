#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

void createFile(){
    ofstream outFile("file1.txt");
    
    if(outFile.is_open()){
        cout<<"File created Successfully"<<endl;
        outFile<<"this is first line\n";
         outFile<<"this is second line\n";
        outFile.close();
    }else{
        cout<<"Unable to open file"<<endl;
    }
}
void readFile(){
    ifstream inFile("file1.txt");
    string line;
    if(inFile.is_open()){
        cout<<"File Opened fail"<<endl;
        while(getline(inFile,line)){
            cout<<line<<endl;
        }
        inFile.close();
    }
    else{
        cout<<"File Open Filed"<<endl;
    }
}
int main(){
    cout<<"hello"<<endl;
    createFile();
    readFile();
    return 0;
}