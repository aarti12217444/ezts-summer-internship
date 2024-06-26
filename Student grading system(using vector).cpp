#include <iostream>
#include<vector>
#include<string>
using namespace std;

 vector<string> studentNames;
    vector<string> studentGrades;
    vector<string> studentSubjects;
    
void addRecords(){
    string names,subjects,grades;
    cout<<"Enter student names: "<<endl;
    cin>>names;
    
    cout<<"Enter student subjects: "<<endl;
    cin>>subjects;
    
    cout<<"Enter student grades: "<<endl;
    cin>>grades;
    
    studentNames.push_back(names);
    studentGrades.push_back(grades);
    studentSubjects.push_back(subjects);

    cout << "Record added successfully.\n";

}

void printRecords(){
    if(studentNames.empty()){
        cout<<"No record found"<<endl;
        //return;
    }
    else{
        for (int i = 0; i < studentNames.size(); i++) {
        cout << i + 1 << ". Name: " << studentNames[i]
             << ", Grade: " << studentGrades[i]
             << ", Subject: " << studentSubjects[i] << endl;
    
        }
    }
}

void updateRecords(){
    if(studentNames.empty()){
        cout<<"No record found"<<endl;
        return;
    }
    int recordNumber;
    cout<<"Enter record number: "<<endl;
    cin>>recordNumber;
    
    if (recordNumber < 1 || recordNumber > studentNames.size()) {
        cout << "Invalid record number.\n";
        return;
    }
    
    string names,subjects,grades;
    cout<<"Enter student names: "<<endl;
    cin>>names;
    
    cout<<"Enter student subjects: "<<endl;
    cin>>subjects;
    
    cout<<"Enter student grades: "<<endl;
    cin>>grades;
    
    studentNames[recordNumber-1] =names;
    studentGrades[recordNumber-1]=subjects;
    studentSubjects[recordNumber-1]=grades;

    cout << "Record Update successfully.\n";

}

void deleteRecords(){
    if(studentNames.empty()){
        cout<<"No record found"<<endl;
        return;
    }
    int recordNumber;
    cout<<"Enter record number: "<<endl;
    cin>>recordNumber;
    
    if (recordNumber < 1 || recordNumber > studentNames.size()) {
        cout << "Invalid record number.\n";
        return;
    }
    studentNames.erase(studentNames.begin() + recordNumber - 1);
    studentGrades.erase(studentGrades.begin() + recordNumber - 1);
    studentSubjects.erase(studentSubjects.begin() + recordNumber - 1);

    cout << "Record deleted successfully.\n";
}

void clearAllRecords() {
    studentNames.clear();
    studentGrades.clear();
    studentSubjects.clear();
    cout << "All records cleared successfully.\n";
}

void display(){
    cout << "\nStudent Record Management System\n";
    cout << "1. Add Record\n";
    cout << "2. Display Records\n";
    cout << "3. Update Record\n";
    cout << "4. Delete Record\n";
    cout << "5. Clear All Records\n";
    cout << "6. Exit\n";
    cout << "Choose an option: ";
}

int main() {
   
    int choice;

    do {
        cout << "\nStudent Records Management System" << endl;
        cout << "1. Add Record" << endl;
        cout << "2. Display Records" << endl;
        cout << "3. Update Record" << endl;
        cout << "4. Delete Record" <<endl;
        cout << "5. Clear All Records" <<endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addRecords();
                break;
            case 2:
                printRecords();
                break;
            case 3:
                updateRecords();
                break;
            case 4:
                deleteRecords();
                break;
            case 5:
                studentNames.clear();
                studentGrades.clear();
                studentSubjects.clear();
                cout << "All records cleared." << endl;
                break;
            case 6:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}