#include <iostream>
using namespace std;

class Account {
public:
    string accountnumber;
    string name;
    string password ;
    double initialDeposit;
    double cBalance;

    Account() {
        accountnumber = "-------------";
        name = "Unknown";
        password = "0000";
        cBalance = 0;
    }

    void setInfo(string n, string p,string q,double r) {
        accountnumber = n;
        name = p;
        password = q;
        initialDeposit = r;
    }

    void getInfo() {
        cout << "account Information:" << endl;
        cout << "Name: " << name << endl;
        cout<< "Account Number: "<<accountnumber<<endl;
        cout << "Password: XXXXXXXX" << endl;
        cout << "Current Balance: " << cBalance << endl;
    }
     void initialdpst(Account &user)
    {    
        double initialDeposit;
        cout<<"Enter money to deposit:"<<endl;
        cin>>initialDeposit;
        if(initialDeposit > 0){
        user.cBalance += initialDeposit;
        }
        else{
            cout<<"invalid input"<<endl;
        }
    }
  
};

//#include "User.h"

class ATMOperations {
public:
    void deposit(Account &user) {
        double amount;
        cout << "Enter money you want to deposit: " << endl;
        cin >> amount;
        if (amount > 0) {
            user.cBalance += amount;
            cout << "Amount of " << amount << " deposited successfully" << endl;
        } else {
            cout << "Invalid amount" << endl;
        }
    }

    void withdraw(Account &user) {
        double wBalance;
        cout << "Your current balance is " << user.cBalance << endl;
        cout << "Enter money you want to withdraw: " << endl;
        cin >> wBalance;
        if (wBalance <= user.cBalance) {
            user.cBalance -= wBalance;
            cout << "Money withdrawal successful." << endl;
        } else {
            cout << "Insufficient balance in your account." << endl;
        }
    }
   
};
// security class
class SecurityAuthentication {
public:
    bool authenticate(Account &user, string inputPsd) {
        return user.password == inputPsd;
    }
};


class BankingTransactions {
public:
    void deposit(Account &user) {
        ATMOperations atm;
        atm.deposit(user);
    }

    void withdraw(Account &user, SecurityAuthentication &security) {
        ATMOperations atm;
        string  Password;
        cout << "Enter your password: ";
        cin >> Password;
        if (security.authenticate(user, Password)) {
            atm.withdraw(user);
        } else {
            cout << "Wrong password .try again." << endl;
        }
    }
};


int main() {
    Account user;
    BankingTransactions transactions;
    SecurityAuthentication security;

    string accountnumber;
    string name;
    string password ;
    double initialDeposit;
    int choice1,choice2;

    do{
        cout << "Welcome to National Smart Bank (NSB).\n" << endl << "To open your account, Kindly provide your correct credentials:" << endl;
        cout << "\nSelect an option to proceed: " << endl;
        cout<<"1. verify your details\n2. Exit\n"<<endl;
        cin>>choice1;

        switch (choice1){
            case 1:
              cout << "Enter your account number: " << endl;
              cin >> accountnumber;
              cout << "Enter your name: " << endl;
              cin >> name;
              cout<< "Confirm your password to proceed:"<<endl;
              cin>>password;
              user.initialdpst(user);
              user.setInfo(accountnumber,name, password,initialDeposit);  
              break;
            case 2:
             cout<<"Account verification completed;"<<"   "<<"you are eligible for ATM services."<<endl;

        }
           

    } while(choice1 !=2);

    do {
        cout << "\nSelect an option to proceed: " << endl;
        cout << "1. Deposit money\n2. Withdraw money\n3. Print passbook\n4. Exit" << endl;
        cin >> choice2;

        switch (choice2) {
            case 1:
                transactions.deposit(user);
                break;
            case 2:
                transactions.withdraw(user,security);
                break;
            case 3:
                user.getInfo();
                break;
            case 4:
                cout << "Exiting ATM. have a nice day" << endl;
                break;
            default:
                cout << "Invalid option. Please enter a number from 1 to 4." << endl;
        }
    } while (choice2 != 4);

    return 0;
}