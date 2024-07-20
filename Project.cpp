#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Transaction {
private:
    string type;
    double amount;
    string date;

public:
    Transaction(const string& type, double amount, const string& date) : type(type), amount(amount), date(date) {}

    void displayTransaction() const {
        cout << "Type: " << type << ", Amount: $" << amount << ", Date: " << date << endl;
    }
};


class Account {
private:
    string accountNumber;
    string accountHolder;
    string password;
    double balance;
    vector<Transaction> transactions;

public:
    Account(const string& accNumber, const string& accHolder, const string& pwd, double initialBalance)
        : accountNumber(accNumber), accountHolder(accHolder), password(pwd), balance(initialBalance) {}

    string getAccountNumber() const {
        return accountNumber;
    }

    string getAccountHolder() const {
        return accountHolder;
    }

    double getBalance() const {
        return balance;
    }

    bool authenticate(const string& pwd) const {
        return pwd == password;
    }

    void deposit(double amount, const string& date) {
        if (amount > 0) {
            balance += amount;
            transactions.emplace_back("Deposit", amount, date);
            cout << "Deposit successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount, const string& date) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            transactions.emplace_back("Withdrawal", amount, date);
            cout << "Withdrawal successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    void displayBalance() const {
        cout << "Account balance: $" << balance << endl;
    }

    void displayDetails() const {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Holder: " << accountHolder << "\n";
        cout << "Balance: $" << balance << "\n";
    }

    void displayTransactions() const {
        cout << "Transaction History:\n";
        for (const auto& transaction : transactions) {
            transaction.displayTransaction();
        }
    }
};

class ATM {
private:
    vector<Account> accounts;

public:
    void addAccount(const Account& account) {
        accounts.push_back(account);
    }

    Account* accessAccount(const string& accountNumber, const string& password) {
        for (auto& account : accounts) {
            if (account.getAccountNumber() == accountNumber && account.authenticate(password)) {
                return &account;
            }
        }
        cout << "Invalid account number or password." << endl;
        return nullptr;
    }

    void displayMenu() const {
        cout << "ATM Menu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Display Transactions\n";
        cout << "5. Exit\n";
    }
};
#include <iostream>

using namespace std;

int main() {
    ATM atm;

    // Create a few accounts
    Account acc1("123456", "Aarti", "1234", 1000.0);
    Account acc2("654321", "Sachin", "2009", 2000.0);

    // Add accounts to the ATM
    atm.addAccount(acc1);
    atm.addAccount(acc2);

    // ATM simulation
    string accNumber;
    string password;
    cout << "Enter account number: ";
    cin >> accNumber;
    cout << "Enter password: ";
    cin >> password;

    Account* account = atm.accessAccount(accNumber, password);
    if (account) {
        int choice;
        do {
            atm.displayMenu();
            cout << "Enter choice: ";
            cin >> choice;

            double amount;
            string date;
            switch (choice) {
                case 1:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    cout << "Enter date (YYYY-MM-DD): ";
                    cin >> date;
                    account->deposit(amount, date);
                    break;
                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    cout << "Enter date (YYYY-MM-DD): ";
                    cin >> date;
                    account->withdraw(amount, date);
                    break;
                case 3:
                    account->displayBalance();
                    break;
                case 4:
                    account->displayTransactions();
                    break;
                case 5:
                    cout << "Exiting ATM. Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice. Try again." << endl;
            }
        } while (choice != 5);
    }

    return 0;
}
