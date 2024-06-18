//Create Classes and Implement Single Inheritance
//Define a base class called Person with the following members:Private data member: name (string).
//Public member function: setName(string) to set the name.
//Public member function: getName() to return the name.
//Define a derived class called Student that inherits from Person using public inheritance.Public data member: studentID (int).
//Public member function: setStudentID(int) to set the student ID.
//Public member function: getStudentID() to return the student ID.
//Implement Multiple Inheritance:

//Define another base class called Athlete with the following members:Public data member: sport (string).
//Public member function: setSport(string) to set the sport.
//Public member function: getSport() to return the sport.
//Modify the Student class to also inherit from Athlete.


#include <iostream>
using namespace std;
class Person{
  private:
  string name;
  


public:
void setName(string n){
    name = n;
// cout<<"Name of the Person"<<"\n";
}
string getName(){
    
    return name;
}
};

class Athlete{
  public:
  string sport;
  
  void setSport(string s){
       sport = s;
  }
  string getSport(){
      return sport;
  }
};

class Student :public Person,public Athlete{
    
    int sId;
    
    public:
    void setStudentID(int id){
        sId=id;
        // cout<<"Student ID is: "<<"\n";
    }
    
    int getStudentID(){
        return sId;
    }
};



int main(){

    
    Student s1;
     s1.setName("V");
     s1.setStudentID(1222214167);
     s1.setSport("cricket");
     
     cout<<"Name of student is: "<<s1.getName()<<endl;
     cout<<"student id is: "<<s1.getStudentID()<<endl;
     cout<<"Sport is: "<<s1.getSport()<<endl;
     
     return 0;
}













