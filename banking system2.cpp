#include<iostream>
using namespace std;

class User {
    public:
        string name;
        int id;
        double cBalance;
        double wBalance;

        User() {
            name = "Unknown";
            id = 0000;
            cBalance = 0;
            wBalance = 0;
        }

        void deposit() {
            double amount;
            cout << "Enter money you want to deposit: " << endl;
            cin >> amount;
            if(amount > 0) {
                cBalance += amount;
                cout << "Amount of " << amount << " deposited successfully" << endl;
            } else {
                cout << "Low amount" << endl;
            }
        }

        void withdraw() {
            double wBalance;
            cout << "Your current balance is " << cBalance << endl;
            cout << "Enter money you want to withdraw: " << endl;
            cin >> wBalance;
            if(wBalance <= cBalance) {
                cBalance -= wBalance;
                cout << "Money withdrawal successful." << endl;
            } else {
                cout << "Insufficient balance in your account." << endl;
            }
        }

        void getInfo() {
            cout << "User Information:" << endl;
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Current Balance: " << cBalance << endl;
        }

        void setInfo(string n, int i) {
            name = n;
            id = i;
        }
};

int main() {
    User c1,c2;
    string name;
    int id;
    int digit;

    cout <<"Welcome to DJ bank."<<endl<<"To open your account Give Info: "<< endl;

    do {
        cout << "\nEnter a digit from 1 to 5 to process your request:" << endl;
        cout << "1. Enter details\n2. Deposit money\n3. Withdraw money\n4. print passbook\n5. Exit" << endl;
        cin >> digit;

        switch(digit) {
            case 1:
                cout << "Enter your name: " << endl;
                cin >> name;
                cout << "Enter your ID: " << endl;
                cin >> id;
                c1.setInfo(name, id);
                break;
            case 2:
                c1.deposit();
                break;
            case 3:
                c1.withdraw();
                break;
            case 4:
                c1.getInfo();
                break;
            case 5:
                cout << "Exiting the application." << endl;
                break;
            default:
                cout << "Invalid option. Please enter a digit from 1 to 5." << endl;
        }
    } while (digit != 5);

    return 0;
}