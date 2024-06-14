/*#include<iostream>

using namespace std;
    class Book{
        public:
        string name;
        int quentity;
        float price;
    };
int main(){
    Book obj1;
    obj1.name="Python";
    obj1.quentity=5;
    obj1.price=30.89;
    
    cout<<obj1.name<<endl;
    cout<<obj1.quentity<<endl;
    cout<<obj1.price;
return 0;
}

#include<iostream>

using namespace std;
    class Book{
        public:
        string name;
        int quentity;
        float price;
        
        string getBookData(){
            return name;
        }
    };
int main(){
    Book obj1;
    obj1.name="Python";
    obj1.quentity=5;
    obj1.price=30.89;
    
    Book obj2;
    obj2.name="cpp";
    obj2.quentity=8;
    obj2.price=900.8;
    cout<<obj2.getBookData();

return 0;
}*/

/*#include<iostream>

using namespace std;
    class Product{
        public:
        string name;
        int quantity;
        float price;
        
        string getProductData(){
            return name;
        }
    };
int main(){
    Product obj1;
    obj1.name="Lipstick";
    obj1.quantity=5;
    obj1.price=300.89;
    cout<<"Product name: "<<obj1.getProductData()<<endl;
    
    Product obj2;
    obj2.name="Eyeliner";
    obj2.quantity=8;
    obj2.price=900.8;
    cout<<"Product name is: "<<obj2.getProductData()<<endl;
    
    Product obj3;
    obj3.name="Face powder";
    obj3.quantity=5;
    obj3.price=500.0;
    cout<<"Product name is: "<<obj3.getProductData();

return 0;
}*/

/*#include<iostream>

using namespace std;
    class Book{
        public:
        string name;
        int quantity;
        
        
        Book(){
            name="Unknown";
            quantity=0;
        }
        
        Book(string x , int y, float z){
            name = x;
            quantity = y;

        }
        
        string getBookData(){
            return name;
        }
		int getBookQuantity(){
            return quantity;
        }
        ~Book(){
            cout<<"Distructure has been called - Memory free"<<endl;
        }
    };
int main(){
     Book obj4("Starting js",67,90);
    cout<<obj4.getBookData();
    
return 0;
}*/