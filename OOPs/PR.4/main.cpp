#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    int balance;

public:
    BankAccount()
    {
        this->accountNumber = 0;
        this->accountHolderName = "";
        this->balance = 0;
    }

    // Destructor
    virtual ~BankAccount()
    {
    }

    // SETTERS
    void setAccountNumber(int accountNumber)
    {
        this->accountNumber = accountNumber;
    }

    void setAccountHolderName(string accountHolderName)
    {
        this->accountHolderName = accountHolderName;
    }

    void setBalance(int balance)
    {
        this->balance = balance;
    }

    // GETTERS
    int getAccountNumber()
    {
        return this->accountNumber;
    }

    string getAccountHolderName()
    {
        return this->accountHolderName;
    }

    int getBalance()
    {
        return this->balance;
    }

    // DEPOSIT
    virtual void deposit(int amount)
    {
        if (amount > 0)
        {
            this->balance = this->balance + amount;

            cout << "Amount Deposited Successfully!" << endl;
        }
        else
        {
            cout << "Invalid Amount!" << endl;
        }
    }

    // WITHDRAW
    virtual void withdraw(int amount)
    {
        if (amount > 0 && amount <= this->balance)
        {
            this->balance = this->balance - amount;

            cout << "Amount Withdrawn Successfully!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // DISPLAY ACCOUNT
    virtual void displayAccountInfo()
    {
        cout << endl;
        cout << "Account Number : "
             << this->accountNumber << endl;

        cout << "Account Holder : "
             << this->accountHolderName << endl;

        cout << "Balance : "
             << this->balance << endl;
    }

    // Virtual Interest Function
    virtual void calculateInterest()
    {
        cout << "Interest calculation is not available."
             << endl;
    }
};

// SAVINGS ACCOUNT
// Inheritance
// BankAccount -> SavingsAccount

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    // Constructor
    SavingsAccount() : BankAccount()
    {
        this->interestRate = 0;
    }

    // Destructor
    ~SavingsAccount()
    {
    }

    // Set Interest Rate
    void setInterestRate(double rate)
    {
        this->interestRate = rate;
    }

    // Get Interest Rate
    double getInterestRate()
    {
        return this->interestRate;
    }

    // Calculate Interest
    void calculateInterest() override
    {
        double interest;

        interest = this->getBalance() * this->interestRate / 100;

        cout << "Interest : "
             << interest << endl;
    }

    // Display Information
    void displayAccountInfo() override
    {
        cout << endl;
        cout << "SAVINGS ACCOUNT" << endl;

        this->BankAccount::displayAccountInfo();

        cout << "Interest Rate : "
             << this->interestRate
             << "%" << endl;
    }
};

// CHECKING ACCOUNT
// Inheritance
// BankAccount -> CheckingAccount
class CheckingAccount : public BankAccount
{
private:
    double overdraftLimit;

public:
    // Constructor
    CheckingAccount() : BankAccount()
    {
        this->overdraftLimit = 0;
    }

    // Destructor
    ~CheckingAccount()
    {
    }

    // Set Overdraft Limit
    void setOverdraftLimit(double limit)
    {
        this->overdraftLimit = limit;
    }

    // Get Overdraft Limit
    double getOverdraftLimit()
    {
        return this->overdraftLimit;
    }

    // Check Overdraft
    void checkOverdraft(int amount)
    {
        if (amount <= this->getBalance() + this->overdraftLimit)
        {
            cout << "Withdrawal is allowed." << endl;
        }
        else
        {
            cout << "Withdrawal exceeds overdraft limit!"
                 << endl;
        }
    }

    // Withdraw
    void withdraw(int amount) override
    {
        if (amount > 0 &&
            amount <= this->getBalance() + this->overdraftLimit)
        {
            this->setBalance(
                this->getBalance() - amount);

            cout << "Amount Withdrawn Successfully!"
                 << endl;
        }
        else
        {
            cout << "Withdrawal exceeds overdraft limit!"
                 << endl;
        }
    }

    // Display Information
    void displayAccountInfo() override
    {
        cout << endl;
        cout << "CHECKING ACCOUNT" << endl;

        this->BankAccount::displayAccountInfo();

        cout << "Overdraft Limit : "
             << this->overdraftLimit << endl;
    }
};

// FIXED DEPOSIT ACCOUNT
// Inheritance
// BankAccount -> FixedDepositAccount
class FixedDepositAccount : public BankAccount
{
private:
    int term;
    double interestRate;

public:
    // Constructor
    FixedDepositAccount() : BankAccount()
    {
        this->term = 0;
        this->interestRate = 0;
    }

    // Destructor
    ~FixedDepositAccount()
    {
    }
    void setTerm(int term)
    {
        this->term = term;
    }
    int getTerm()
    {
        return this->term;
    }
    void setInterestRate(double rate)
    {
        this->interestRate = rate;
    }

    // Get Interest Rate
    double getInterestRate()
    {
        return this->interestRate;
    }

    // Calculate Interest
    void calculateInterest() override
    {
        double interest;

        interest = this->getBalance() * this->interestRate * this->term / 1200;

        cout << "Fixed Deposit Interest : "
             << interest << endl;
    }

    // Display Information
    void displayAccountInfo() override
    {
        cout << endl;
        cout << "FIXED DEPOSIT ACCOUNT"
             << endl;

        this->BankAccount::displayAccountInfo();

        cout << "Term : "
             << this->term
             << " Months" << endl;

        cout << "Interest Rate : "
             << this->interestRate
             << "%" << endl;
    }
};

int main()
{
    // Array of Base Class Pointers
    BankAccount *accounts[100];

    int accountCount = 0;
    int choice;

    do
    {
        cout << endl;
        cout << "BANKING SYSTEM" << endl
             << endl;
        cout << "1. Create Savings Account" << endl;
        cout << "2. Create Checking Account" << endl;
        cout << "3. Create Fixed Deposit Account" << endl;
        cout << "4. Deposit Money" << endl;
        cout << "5. Withdraw Money" << endl;
        cout << "6. View All Accounts" << endl;
        cout << "7. Search Account" << endl;
        cout << "8. Calculate Interest" << endl;
        cout << "9. Exit" << endl
             << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        //saving acc

        if (choice == 1)
        {
            SavingsAccount *account =
                new SavingsAccount();

            int number;
            string name;
            double balance;
            double rate;

            cout << "Enter Account Number : ";
            cin >> number;

            cout << "Enter Account Holder Name : ";
            cin >> name;

            cout << "Enter Initial Balance : ";
            cin >> balance;

            cout << "Enter Interest Rate : ";
            cin >> rate;

            account->setAccountNumber(number);
            account->setAccountHolderName(name);
            account->setBalance(balance);
            account->setInterestRate(rate);

            accounts[accountCount] = account;
            accountCount++;

            cout << "Savings Account Created Successfully!"
                 << endl;
        }
        // CREATE CHECKING ACCOUNT
        else if (choice == 2)
        {
            CheckingAccount *account =
                new CheckingAccount();

            int number;
            string name;
            double balance;
            double limit;

            cout << "Enter Account Number : ";
            cin >> number;

            cout << "Enter Account Holder Name : ";
            cin >> name;

            cout << "Enter Initial Balance : ";
            cin >> balance;

            cout << "Enter Overdraft Limit : ";
            cin >> limit;

            account->setAccountNumber(number);
            account->setAccountHolderName(name);
            account->setBalance(balance);
            account->setOverdraftLimit(limit);

            accounts[accountCount] = account;
            accountCount++;

            cout << "Checking Account Created Successfully!"
                 << endl;
        }

        // CREATE FIXED DEPOSIT ACCOUNT
        else if (choice == 3)
        {
            FixedDepositAccount *account =
                new FixedDepositAccount();

            int number;
            string name;
            double balance;
            double rate;
            int term;

            cout << "Enter Account Number : ";
            cin >> number;

            cout << "Enter Account Holder Name : ";
            cin >> name;

            cout << "Enter Deposit Amount : ";
            cin >> balance;

            cout << "Enter Interest Rate : ";
            cin >> rate;

            cout << "Enter Term (Months) : ";
            cin >> term;

            account->setAccountNumber(number);
            account->setAccountHolderName(name);
            account->setBalance(balance);
            account->setInterestRate(rate);
            account->setTerm(term);

            accounts[accountCount] = account;
            accountCount++;

            cout << "Fixed Deposit Account Created Successfully!"
                 << endl;
        }

        // DEPOSIT
        else if (choice == 4)
        {
            int number;
            double amount;
            bool found = false;

            cout << "Enter Account Number : ";
            cin >> number;

            cout << "Enter Deposit Amount : ";
            cin >> amount;

            for (int i = 0; i < accountCount; i++)
            {
                if (accounts[i]->getAccountNumber() == number)
                {
                    accounts[i]->deposit(amount);

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Account Not Found!" << endl;
            }
        }

        // WITHDRAW

        else if (choice == 5)
        {
            int number;
            double amount;
            bool found = false;

            cout << "Enter Account Number : ";
            cin >> number;

            cout << "Enter Withdrawal Amount : ";
            cin >> amount;

            for (int i = 0; i < accountCount; i++)
            {
                if (accounts[i]->getAccountNumber() == number)
                {
                    accounts[i]->withdraw(amount);

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Account Not Found!" << endl;
            }
        }
        // VIEW ALL ACCOUNTS
        else if (choice == 6)
        {
            if (accountCount == 0)
            {
                cout << "No Accounts Available!"
                     << endl;
            }
            else
            {
                cout << endl;
                cout << "ALL ACCOUNTS"
                     << endl;

                for (int i = 0; i < accountCount; i++)
                {
                    accounts[i]->displayAccountInfo();
                    cout << endl;
                }
            }
        }
        // SEARCH ACCOUNT
        else if (choice == 7)
        {
            int number;
            bool found = false;

            cout << "Enter Account Number : ";
            cin >> number;

            for (int i = 0; i < accountCount; i++)
            {
                if (accounts[i]->getAccountNumber() == number)
                {
                    accounts[i]->displayAccountInfo();

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Account Not Found!" << endl;
            }
        }

        // CALCULATE INTEREST
        else if (choice == 8)
        {
            int number;
            bool found = false;

            cout << "Enter Account Number : ";
            cin >> number;

            for (int i = 0; i < accountCount; i++)
            {
                if (accounts[i]->getAccountNumber() == number)
                {
                    accounts[i]->calculateInterest();

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Account Not Found!" << endl;
            }
        }
                // EXIT
        else if (choice == 9)
        {
            cout << endl;
            cout << "Thank You For Using Banking System!"
                 << endl;
        }

        else
        {
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 9);

    // DELETE ALL OBJECTS

    for (int i = 0; i < accountCount; i++)
    {
        delete accounts[i];
    }

    return 0;
}