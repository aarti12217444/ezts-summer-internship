#include<iostream>
using namespace std;
class Electronic{
    private:
    void laptop(){
        cout<<"I have ASUS laptop";
    }
    
    protected:
    void headphone(){
        cout<<"I have Zeb-ban-pro headphone";
    }
    
    public:
    void phone(){
        cout<<"I have sumsung Phone";
        laptop();
        headphone();
    }
    
};
class Product : public Electronic{
    public:
    void fun1(){
        cout<<"From inside Product class"<<"\n";
        headphone();
    }
};
class Objects : protected Product{
    public:
    void objFun(){
        cout<<"From inside Object class"<<"\n";
        fun1();
        headphone();
    }
};
class secure : private Objects{
    //THESE WILL BE PRIVATE 
    //objFun
    // fun1();
    //     headphone();
    public: void secureFunction(){
        cout<<"From inside secureFunction"<<"\n";
    }
    
};
class c1 : public secure{
    public : void c1Function(){
        secureFunction();
    }
};

int main(){
//   Product p1;
//   p1.phone();
//   p1.fun1();
   
//   Objects o1;
//   o1.objFun();
   
//   secure s1;
//   s1.secureFunction();
c1 cobj;
cobj.c1Function();
   return 0;
  }