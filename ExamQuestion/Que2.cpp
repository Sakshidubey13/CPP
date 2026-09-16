//Define a class `BankAccount` with private attributes `accountNumber`, `balance`, and `ownerName`.Encapsulate these attributes using appropriate access specifiers.Implement public member functions to credit, debit, and display the balance.Demonstrate encapsulation by interacting with the class through its member functions.#include<iostream> using namespace std;

#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    int balance;
    string ownerName;

public:
    BankAccount(
        string ownerName, 
        int accountNumber,
         int balance
        )
    {
        this->accountNumber = accountNumber;
        this->balance = balance;
        this->ownerName = ownerName;
    }

    void credit(int amount)
    {
       this-> balance = balance + amount;
    }
    
        void debit(int amount)
        {
            if (amount = balance)
               this-> balance = this->balance - amount;
            
        }
    
        void displayBalance()
        {
            cout << "Owner Name: " << this->ownerName << endl;
            cout << "Account Number: " << this->accountNumber << endl;
            cout << "Balance: Rs. " << this->balance << endl;
        }
    };
    
     int main()
    {
        BankAccount account("Ayush" , 123456789, 10000);
        account.credit(5000);//income
        account.debit(2000);// exp
    
        account.displayBalance(); // let's --> total balance = 10000 
                                 //            income (Credit) = 5000 --->15000
                                 //             expense(debit) = 2000 --> 15000- 2000
                                 //    output ---> 13000
    
        return 0;
    }