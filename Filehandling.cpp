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
void updateFile(){
    //read file
    ifstream inFile("file1.txt");
    vector<string> lines;
    string line;
    if(inFile.is_open()){
        cout<<"File Opened fail"<<endl;
        while(getline(inFile,line)){
            // cout<<line<<endl;
            lines.push_back(line);
        }
        inFile.close();
    }
    else{
        cout<<"File Open Filed"<<endl;
    }
    
    //modify
    //user se input lena h
    lines.push_back("This is the new line \n");
    
    
    //write the updated contents means the vector to the existing file
    ofstream outFile("file1.txt");
    if(outFile.is_open()){
        for(int i=0;i<lines.size(); ++i){
            outFile<<lines[i]<<"\n";
        }
        outFile.close();
        cout<<"file updated successfully"<<endl;
    }
    else{
        cout<<"unable to opened"<<endl;
    }
}
int main(){
    cout<<"hello"<<endl;
    // createFile();
    // readFile();
    updateFile();
    return 0;
}